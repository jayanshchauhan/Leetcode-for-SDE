class Solution {
public:
    bool isUgly(int n) {
        // if(n<=0) return false;
        // while(n>1){
        //     if(n%2==0){
        //         n/=2;
        //     }
        //     else if(n%3==0){
        //         n/=3;
        //     }
        //     else if(n%5==0){
        //         n/=5;
        //     }
        //     else 
        //         return false;
        // }
        // return true;
        if(n <= 0){
            return false;
        }
        int temp = n;
        while(temp % 2 ==0){
            temp/=2;
        }
        while(temp%3==0){
            temp/=3;
        }
        while(temp%5==0){
            temp/=5;
        }
        if(temp ==1){
            return true;
        }
        return false;
    }
};