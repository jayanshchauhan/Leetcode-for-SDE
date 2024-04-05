class Solution {
public:
    string makeGood(string s) {
    //'A'=65 and 'a'=97 so every time difference check is either +-32
    string ans="";
    for (auto it : s) {
        if (!ans.empty() && abs(it - ans[ans.size()-1]) == 32)
        ans.pop_back();
        else 
        ans.push_back(it);
    }  

    return ans;  
    }
};

/*
string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
        int i=1;
        for(int i=1;i<s.size();i++)
        {
            if(!st.empty() && abs(st.top()-s[i])==32) st.pop();
            else st.push(s[i]);
        }
        s="";
        while(!st.empty())
        {
            s=st.top() + s;
            st.pop();
        }
        return s;
    }
*/