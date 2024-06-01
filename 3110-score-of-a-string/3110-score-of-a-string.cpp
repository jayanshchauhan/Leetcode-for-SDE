class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i+1<s.size();i++){
            int v = s[i];
            int v2 = s[i+1];   
            sum+=abs(v2-v);
        }
        return sum;
    }
};