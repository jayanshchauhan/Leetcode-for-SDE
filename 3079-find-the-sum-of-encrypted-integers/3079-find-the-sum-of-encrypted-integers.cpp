class Solution {
public:
    int encrypt(int num){
        int res = 0;
        int temp = num;
        int tempp = 0;
        int maxx = 0;
        int count = 0;
        while(temp){
            tempp = temp%10;
            maxx = max(tempp,maxx);
            temp = temp/10;
            count++;
        }
        
        if(count == 1) return num;
        
        while(count--){
            res = res*10+maxx;
        }
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        long long int res = 0;
        for(int i=0;i<nums.size();i++){
            res += encrypt(nums[i]);
        }
        return res;
    }
};