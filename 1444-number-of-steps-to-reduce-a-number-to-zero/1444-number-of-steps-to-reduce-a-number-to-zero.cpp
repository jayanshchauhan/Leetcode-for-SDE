class Solution {
public:
 int func(int n,int count){
    if(n==0){
        return count;
    }
    if(n%2==0){
        return func(n/2,count+1);
    }else{
        return func(n-1,count+1);
    }
 }
    int numberOfSteps(int num) {
        return func(num,0);
    }
};