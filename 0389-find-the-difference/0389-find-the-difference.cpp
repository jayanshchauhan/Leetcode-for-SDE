class Solution {
public:
    char findTheDifference(string s, string t) {
        // for(int i=0;i<t.length();i++){
        //     if(s.find(t[i]) == string::npos){
        //         return char(t[i]);
        //     }
        // }
        // return 0;
        s+=t; int c=0;
    for(auto x: s)
    {
        c^=x;
    }
    return c;
    }
};