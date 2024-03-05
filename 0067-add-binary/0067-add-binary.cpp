class Solution {
public:
    // int toInt(string x){
    //     long long int p = 0,i=x.length()-1,res=0;
    //     while(i>=0){
    //         res += (long long)pow(2,p)*(x[i]-48);
    //         p++;
    //         i--;
    //     }
    //     return res;
    // }
    int toInt(const std::string& x) {
    long long int res = 0;
    for (char c : x) {
        res = (res << 1) | (c - '0');
    }
    return res;
}
    string toBinary(long long int num){
        string res="";
        while(num>0){
            res += (num%2)+48;
            num = num/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    string addBinary(string a, string b) {
        
        int i=a.length()-1;
        int j=b.length()-1;

        int carry=0;
        string res;
        while(i>=0||j>=0||carry>0){

            int d1=i>=0?a[i]-'0':0;
            int d2=j>=0?b[j]-'0':0;

            int sum=d1+d2+carry;

            if(sum%2==0)res.push_back('0');
            else res.push_back('1');

            if(sum>1)carry=1;
            else carry=0;
            i--;
            j--;

        }

        reverse(res.begin(),res.end());

        return res;
    }
};