class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = int(arr.size()), answer = 0;
        int ans = 0;
        
        // for (int left = 0; left < n; ++left) {
        //     int currentSum = 0; 
        //     for (int right = left; right < n; ++right) {
        //         currentSum += arr[right];
        //         answer += (right - left + 1) % 2 == 1 ? currentSum : 0;
        //     }
        // }
        // return answer;
        for (int i = 0; i < n; i++) {
            ans+=arr[i]*(((i+1)*(n-i)+1)/2);
        }
        return ans;
    }
};