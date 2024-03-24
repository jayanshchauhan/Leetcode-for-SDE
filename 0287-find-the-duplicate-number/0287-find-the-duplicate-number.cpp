class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int x = (i+1)^nums[i];
            if(i+1<nums[i])
                continue;
            if(x != 0){
                return nums[i];
            }
        }
        return -1;
    }
};