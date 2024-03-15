class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> l(nums.size()+1),r(nums.size()+1),res(nums.size());
        l[0] = 1;
        r[nums.size()-1] = 1;
        for(int i=1;i<nums.size();i++){
            l[i] = l[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            r[i] = r[i+1] * nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            res[i] = l[i]*r[i];
        }
        return res;
    }
};