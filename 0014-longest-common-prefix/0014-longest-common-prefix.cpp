class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string s="";
       sort(strs.begin(),strs.end());
      int n= strs.size();
       string s1= strs[0];
       string s2=strs[n-1];
       int i=0;int j=0;
       while(i<s1.size()&&j<s2.size()){
         if(s1[i]==s2[j]){
             s=s+s1[i];
             i++;j++;
         }
         else{
             break;
         }
       }
     
        return s;
        }
};