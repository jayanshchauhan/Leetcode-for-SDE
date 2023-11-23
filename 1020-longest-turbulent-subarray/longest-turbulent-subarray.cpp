class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n= size(arr);
    if(n==1) return 1;
	int mx=INT_MIN;
    int dp[n];
    dp[0]=1; 
    arr[1]!=arr[0]? dp[1]=2 : dp[1]=1;      //special case for index-1
mx = max(dp[0], dp[1]);
    for(int i=2;i<n;i++){
        if( (arr[i-2]>arr[i-1] && arr[i-1]<arr[i]) || (arr[i-2]<arr[i-1] && arr[i-1]>arr[i]))
           dp[i]= dp[i-1]+1;
        else
           arr[i]!=arr[i-1]? dp[i]=2 : dp[i]=1;
        
        mx = max(mx,dp[i]);
    }
    
    return mx;
    }
};