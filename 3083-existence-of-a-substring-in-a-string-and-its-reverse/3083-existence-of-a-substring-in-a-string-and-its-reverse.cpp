class Solution {
public:
    bool isSubstringPresent(string s) {
        std::unordered_map<std::string,int> substrings;
        
        for (int i = 0; i < s.length() - 1; ++i) {
            std::string sub = s.substr(i, 2);
            substrings[sub] = 1;
        }
        std::reverse(s.begin(), s.end());
        for (int i = 0; i < s.length() - 1; ++i) {
            std::string sub = s.substr(i, 2);
            if(substrings.find(sub) != substrings.end()){
                return true;
            }
        }
        return false;
    }
};