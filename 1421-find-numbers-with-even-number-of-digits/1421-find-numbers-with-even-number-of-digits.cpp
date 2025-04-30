class Solution {
public:
    bool isCheck(int n){
        int count=0;
        while(n){
            n=n/10;
            count++;
        }
        if(count%2 != 0){
            return false;
        }
        return true;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=isCheck(nums[i]);
        }
        return ans;
    }
};