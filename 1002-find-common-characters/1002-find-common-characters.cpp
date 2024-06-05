class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> count(26, INT_MAX);

        for (auto& word : words) {
            vector<int> temp(26, 0);
            for (auto c : word) {
                temp[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                count[i] = min(count[i], temp[i]);
            }
        }

        vector<string> res;
        for (int i = 0; i < 26; i++) {
            while (count[i]-- > 0) {
                res.push_back(string(1, i + 'a'));
            }
        }

        return res;
    }
};