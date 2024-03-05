class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int sum = 0;
        int n = nums.size();
        long long int maxx = n*(n+1)/2;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return maxx-sum;
    }
};