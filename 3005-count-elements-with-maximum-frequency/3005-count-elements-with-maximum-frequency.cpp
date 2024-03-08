class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> um;
        
        for(int i=0;i<nums.size();i++){
            if(um.find(nums[i]) != um.end()){
                um[nums[i]]++;
            }else{
                um.insert({nums[i],1});
            }
        }
        int maxi = INT_MIN;
        for(auto x:um){
            maxi = max(maxi,x.second);
        }
        long long int result = 0;
        for(auto x:um){
            if(x.second == maxi){
                result+=x.second;
            }
        }
        return result;
    }
};