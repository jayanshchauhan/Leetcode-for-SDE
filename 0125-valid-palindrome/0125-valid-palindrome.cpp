class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length()-1;
        int i=0,j=n;
        while(i<j){
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }else if(iswalnum(s[i]) && iswalnum(s[j])){
                return false;
            }
            else{
                while(!iswalnum(s[i]) && i<j){
                    i++;
                }
                while(!iswalnum(s[j]) && i<j){
                    j--;
                }
            }
        }
        return true;
    }
};