class Solution {
public:
    vector<string> cellsInRange(string s) {
        int startch = s[0];
        int endch = s[3];
        int startIn = int(s[1])-48;
        int endIn = int(s[4])-48;
        vector<string>result;
        cout<<startch;
       for(char c = startch; c<= endch; c++)
       {
           for(int i = startIn; i<= endIn; i++)
           { 
               string str = "";
               str+=c;
               str+=to_string(i);
               result.push_back(str);
           }
       } 
        return result;
    }
};