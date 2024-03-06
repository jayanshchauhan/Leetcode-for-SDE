class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i=left;i<=right;i++){
            if(i%10==0){
                continue;
            }
            int n=i,flag=1;
            while(n>0){
                int rem=n%10;
                if(rem==0||i%rem!=0){
                    flag=0;
                    break;
                }
                n=n/10;
            }
            if(flag){
                arr.push_back(i);
            }
        }
        return arr;
    }
};