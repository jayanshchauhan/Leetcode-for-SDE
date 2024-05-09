class Solution {
public:
    bool fun(vector<int>& candies, int c , long long k) {
        long long cnt = 0;
        for(int p : candies )
            cnt += p/c ;
        return cnt>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long int sum = 0;
        int i=0;
        int n = candies.size();
        int maximum = INT_MIN;
        while(n--){
            sum+=candies[i];
            maximum = max(maximum,candies[i]);
            i++;
        }
        int left=1;
        int right=maximum;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(fun(candies,mid,k)){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};