class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n; i++)
        {
            if(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i])
            {
                swap(nums[i], nums[nums[i]-1]);
                i--; //Reconsider the element which came after swapping
            }
        }
        // Find the first element which is not at correct position.
        for(int i =0; i<n; i++)
        {
            if(nums[i]!=i+1) return i+1;
        }
        //Edge case is our array contains all elements from [0-n].
        //So in that case answer would be n+1
        return n+1;
    }
};