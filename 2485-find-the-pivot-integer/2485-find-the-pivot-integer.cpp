class Solution {
public:
    int pivotInteger(int n) {
        // int total = n*(n+1)/2;
        // vector<int> psum(n+1);
        // psum[0] = 0;
        // for(int i=1;i<=n;i++){
        //     psum[i] = psum[i-1] + i;
        // }
        // for(int i=0;i<psum.size();i++){
        //     if(psum[i] == total - psum[i] + i){
        //         return i;
        //     }
        // }
        // return -1;
        if(n == 1){
            return n;
        }
        int start = 1;
        int end = n;
        int mid = start + (end - start)/2;
        while(start < end){
            int sum1 = (mid * (mid + 1)/2);
            int sum2 = ((n * (n + 1))/2) - (mid * (mid + 1)/2) + mid;
           
            if(sum1 == sum2){
                return mid;
            }
            else if(sum2 > sum1){
             start = mid + 1;
            }
            else{
                end = mid -1;
            }
           
           
            mid = start + (end - start)/2;
            
            
            
        }
        return -1;
    }
};