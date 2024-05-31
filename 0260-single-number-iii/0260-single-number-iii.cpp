class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xori=0;
        for(auto &num:nums){
            xori^=num;
        }
        int mask=xori&(-xori);
        int groupa=0, groupb=0;

        for(auto &num:nums){
            if(num&mask) groupa^=num;
            else groupb^=num;
        }
        return {groupa, groupb};
    }
};