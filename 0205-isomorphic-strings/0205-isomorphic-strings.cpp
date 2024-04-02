class Solution {
public:
    
    bool isIsomorphic(string s, string t) {
        bool ans = true;
      if(s.size()!=t.size()){
        return false;
      }
      unordered_map<char,char>mp;
      unordered_map<char,bool>use;
      for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]==t[i]){
                continue;
            }else{
                return false;
            }
        }else if(mp.find(s[i])==mp.end()){

            if(use[t[i]]!=true){
                 mp[s[i]] = t[i];
                 use[t[i]]=true;
            }else{
                return false;
            }
               
        }
        
      }
     
        return ans;
    }
};