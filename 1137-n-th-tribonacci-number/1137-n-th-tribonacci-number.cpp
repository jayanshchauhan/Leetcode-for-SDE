class Solution {
public:
    int tribonacci(int n) {
        if(n>37)return 0;
        vector<long long int> store(n+1);
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 1;
        
        store[0] = 0;
        store[1] = 1;
        store[2] = 1;
        
        
        for(int i=3;i<=n;i++){
            store[i] = static_cast<long long int>(store[i-3] + store[i-2] + store[i-1]);
        }
        return store[n];
    }
};