class Solution {
public:
    int differenceOfSums(int n, int m) {
        int even=0,odd=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                even+=i;
            }else if(i%m!=0){
                odd+=i;
            }
        }
        return odd-even;
    }
};