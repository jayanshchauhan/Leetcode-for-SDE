class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int> um;
        int sum = 0,ans = 0;
        um[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = sum % k ;
            if(rem < 0){
                rem += k;
            }
            if(um.find(rem) != um.end()){
                ans += um[rem];
                um[rem]++;
            }else{
                um[rem] = 1;
            }
        }
        return ans;
    }
};