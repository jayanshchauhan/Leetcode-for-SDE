class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string a = to_string(n);
        int m=a.length();
        for( int i = a.length()-1 ; i > 0 ; --i) if(a[i-1] > a[i]) --a[i-1], m = i;
        for( int i = m ; i < a.length() ; ++i) a[i]='9';
        return stoi(a);
    }
};