#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length()-1;
        int i=0,j=n;
        while(i<j){
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }else if(((int(s[i])>=65 && int(s[i])<=90 )||(int(s[i])>=97 && int(s[i])<=122 ))
                    &&
                     ((int(s[j])>=65 && int(s[j])<=90 )||(int(s[j])>=97 && int(s[j])<=122 )
                    )){
                return false;
            }else if(iswalnum(s[i]) && iswalnum(s[j])){
                return false;
            }
            else{
                while(!isalpha(s[i]) && !iswalnum(s[i]) && i<j){
                    i++;
                }
                while(!isalpha(s[j]) && !iswalnum(s[j]) && i<j){
                    j--;
                }
            }
        }
        return true;
    }
};