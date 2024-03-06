class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.length()-1;
        int m = num2.length()-1;
        int x = max(n,m)+1;
        string res = "";
        int carry = 0;
        while(x--){
            int t1 = n >= 0 ? num1[n] - '0' : 0;
            int t2 = m >= 0 ? num2[m] - '0' : 0;
            if(carry+t1+t2>=10){
                res+=((t1+t2+carry)%10) + '0';
                carry = 1;
            }else{
                res += (carry+t1+t2)+'0';
                carry = 0;
            }
            n--;m--;
        }
        if(carry!=0){
            res+=carry+'0';
        }
        reverse(res.begin(),res.end());
        return res;
    }
};