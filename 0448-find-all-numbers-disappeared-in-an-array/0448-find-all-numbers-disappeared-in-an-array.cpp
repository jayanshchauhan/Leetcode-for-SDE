class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n=nums.size();
       vector<int> ans(n,0);
       vector<int> realans;
       for(int i=0;i<n;i++){
           ans[nums[i]-1]++;
       }
       for(int j=0;j<n;j++)
       {
           if(ans[j]==0) realans.push_back(j+1);
       }
       return realans;
    }
};