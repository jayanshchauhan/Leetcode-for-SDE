class Solution {
public:
    bool isHappy(long long int n) {
        int initial=n;
        do{
            long long int crnt=0;
            while(n>0){
                int r=n%10;
                crnt+=r*r;
                n=n/10;
            }
            n=crnt;
            if(n==1 || n==7)
            return true;
        }while(9<n);
        return false;
    }
};
