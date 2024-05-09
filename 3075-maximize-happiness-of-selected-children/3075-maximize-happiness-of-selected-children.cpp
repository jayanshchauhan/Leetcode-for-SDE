class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long int minus = 0;
        long long int ans = 0;
        while(k--){
            int check = happiness[minus]-minus;
            if(check < 0){
                break;
            }
            ans+=check;
            minus++;
        }
        return ans;
    }
};