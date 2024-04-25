class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> dp(26,0) ;
        int maximum = 0 ; 
        for(int i = 0 ; i < s.length() ; ++i)
        {
            int current = s[i]-'a' ; 
            int best = 0 ; 
            for(int j = 0 ; j < 26 ; ++j)
            {
   //             cout<<"current-> "<<current<<" | "<<"current-j"<<abs(current-j)<<" ";
                if(abs(current-j)<=k)
                {
   //                 cout<<"Y"<<dp[j]<<"Y";
                    best = max(best,dp[j]) ; 
                }
            }
 //           cout<<"XXXXXX";
            dp[current] = max(dp[current],best+1) ; 
            maximum = max(maximum,dp[current]) ; 
        }
        return maximum ;
    }
};