class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> um;
        string res = "";
        
        for(int i=0;i<s.length();i++){ 
            um[s[i]]++;
        }
        
        for(int i=0;i<order.length();i++){
            if(s.find(order[i]) != string::npos){
                while(um[order[i]]--){
                    res+=order[i];
                }
            }
        }
        for(int i=0;i<s.length();i++){ 
            if(um[s[i]]!=-1){
                res+=s[i];
            }
            
        }
        return res;
    }
};