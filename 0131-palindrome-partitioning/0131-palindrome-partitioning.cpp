class Solution {
public:
    bool isPalindrome(string &str, int s, int e) {
        while (s < e) {
            if (str[s] != str[e])
                return false;
            s++;
            e--;
        }
        return true;
    }

    void dfs(string &s, int start, vector<string> &current, vector<vector<string>> &ans) {
        if (start >= s.size()) {
            ans.push_back(current);
            return;
        }

        for (int end = start; end < s.size(); ++end) {
            if (isPalindrome(s, start, end)) {
                current.push_back(s.substr(start, end - start + 1));
                dfs(s, end + 1, current, ans);
                current.pop_back();  // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> current;
        dfs(s, 0, current, ans);
        return ans;
    }
};