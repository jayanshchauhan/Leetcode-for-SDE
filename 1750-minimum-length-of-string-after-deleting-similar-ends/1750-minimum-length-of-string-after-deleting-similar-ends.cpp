class Solution {
public:
    int minimumLength(string s) {
//         int n = s.length()-1;
//         int i=0,j=n;
//         int res = 0;
//         n++;
        
//         while(i<j){
//             if(s[i] == s[j] && i<j){
//                 while(s[i] == s[i+1]){
//                     cout<<"h";
//                     res+=1;
//                     i++;
//                 }
//                 while(s[j] == s[j-1] && i<j){
//                     cout<<"hel";
//                     res+=1;
//                     j--;
//                 }
//                 cout<<res;
//                 res+=2;
//                 i++;j--;
//                 cout<<res;
//                 if(i>j)
//                     break;
//             }else{
//                 break;
//             }
//         }
//          return n-res+1;
        int i=0,j=s.size()-1;
        while(i<j && s[i]==s[j]){
            char ch=s[i];
            while(i<j && ch==s[i]) i++;
            while(i<=j && ch==s[j]) j--; 
        }
        return j-i+1;

    }
};