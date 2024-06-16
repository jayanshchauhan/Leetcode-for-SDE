#define ll long long
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int ans=0;ll ml=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]<=ml+1){
               ml+=nums[i];
           }
           else{
               while(nums[i]>ml+1){
                   ml+=(ml+1);
                   ans++;
                   if(ml>=n)break;
               }
               ml+=nums[i];
           }
           if(ml>=n)break;
       }
       while(ml<n){
           ml+=ml+1;
           ans++;
       }
        return ans;
    }
};