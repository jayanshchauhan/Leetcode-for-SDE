class Solution {
public:
    int arrangeCoins(int n) {
        long low=1, high=n, coins=0, ans=-1;
        while(low<=high)
        {
            long mid=low+(high-low)/2;
            coins=mid*(mid+1)/2;
            if(coins>n)
            {
                high=mid-1;
            }
            else if(coins<=n)
            {
                ans=mid;
                low=mid+1;
            }

        }
        return ans;
    }
};