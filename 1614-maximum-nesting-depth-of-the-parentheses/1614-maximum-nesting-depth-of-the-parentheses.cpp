class Solution {
public:
    int maxDepth(string s) {
        int ans = 0,res = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                ans++;
            }else if(s[i] == ')'){
                ans --;
            }
            res = max(ans,res);
        }
        
        return res;
    }
};