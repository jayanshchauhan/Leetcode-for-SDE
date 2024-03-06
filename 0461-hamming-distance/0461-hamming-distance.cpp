class Solution {
public:
    int countNumberOfOnes(int n){
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
    int hammingDistance(int x, int y) {
        int ans = x ^ y;
        return countNumberOfOnes(ans);
    }
};