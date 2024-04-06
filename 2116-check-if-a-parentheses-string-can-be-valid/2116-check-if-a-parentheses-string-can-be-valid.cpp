class Solution {
public:
    bool canBeValid(string s, string locked) {
        std::stack<int> leftStack, starStack;
        
        for(int i = 0; i < s.length(); i++) {
            if(locked[i] == '0'){
                s[i] = '*';
            }
        }
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                leftStack.push(i);
            } else if(s[i] == '*') {
                starStack.push(i);
            } else { // s[i] == ')'
                if(!leftStack.empty()) {
                    leftStack.pop();
                } else if(!starStack.empty()) {
                    starStack.pop();
                } else {
                    return false;
                }
            }
        }
        
        while(!leftStack.empty() && !starStack.empty()) {
            if(leftStack.top() > starStack.top()) {
                return false;
            }
            leftStack.pop();
            starStack.pop();
        }
        if(starStack.size()%2) return false;
        return leftStack.empty();
        
        int n = locked.size();
        for(int i = 0;i < n;i++){
            if(locked[i] == '0'){
                s[i] = '*';
            }
        }
        stack<int> stpar, stas;
        for(int i = 0;i < s.length();i++){
            if(s[i] == '('){
                stpar.push(i);
            } else if(s[i] == '*'){
                stas.push(i);
            } else {
                if(!stpar.empty()){
                    stpar.pop();
                } else if(!stas.empty()){
                    stas.pop();
                } else {
                    return false;
                }
            }
        }
        while(!stpar.empty() && !stas.empty() && stas.top() > stpar.top()){    
            stpar.pop();
            stas.pop();
        }
        if(stas.size()%2)
            return false;
        return stpar.empty();
    }
};