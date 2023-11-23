class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int pos=0,neg=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            pos+=nums[i];
            neg+=nums[i];
            maxi=max(max(abs(pos),abs(neg)),maxi);
            if(pos<=0){
                pos=0;
            }
            if(neg>0){
                neg=0;
            }
        }
        return maxi;
    }
};