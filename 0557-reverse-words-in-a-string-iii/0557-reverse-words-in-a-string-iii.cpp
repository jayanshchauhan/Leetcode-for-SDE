class Solution {
public:
    string reverseWords(string s) {
       string str = "";
        string check = "";
        int n = s.size();

        for(int i = 0; i < n; ++i){
            if(s[i] == ' ' || i == n - 1){
                if(i == n-1) check+=s[i];
                reverse(check.begin(),check.end());
                str += check;
                if(i != n - 1) str += ' ';
                check = "";
            }
            else check+=s[i];
        }

        return str;
    }
};