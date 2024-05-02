class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> um;
        int maxi = INT_MIN;
        for(auto x:nums){
            if(x<0){
                if(um.find(x * -1) != um.end()){
                    maxi = max(abs(x),maxi);
                }else{
                    um[x] = 1;
                }
            }else{
                if(um.find(x * -1) != um.end()){
                    maxi = max(abs(x),maxi);
                }else{
                    um[x] = 1;
                }
            }
        }
        return maxi == INT_MIN ? -1 : maxi;
    }
};