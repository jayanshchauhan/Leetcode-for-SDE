class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi = INT_MIN;

        for(int i=1;i<nums.size();i++){
            maxi=max(maxi,abs(nums[i]-nums[i-1]));
        }
        return max(maxi,abs(nums[0]-nums[nums.size()-1]));
    }
};