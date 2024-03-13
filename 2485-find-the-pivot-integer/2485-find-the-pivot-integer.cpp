class Solution {
public:
    int pivotInteger(int n) {
        int total = n*(n+1)/2;
        vector<int> psum(n+1);
        psum[0] = 0;
        for(int i=1;i<=n;i++){
            psum[i] = psum[i-1] + i;
        }
        for(int i=0;i<psum.size();i++){
            if(psum[i] == total - psum[i] + i){
                return i;
            }
        }
        return -1;
    }
};