class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n = s.length();
        long long int count = 0;
        int cCount = 0; // Count of occurrences of character 'c' in the string

        // Count the occurrences of character 'c' in the string
        for (char ch : s) {
            if (ch == c) {
                cCount++;
            }
        }

        // Calculate the total number of substrings starting and ending with 'c'
        count = static_cast<long long>(cCount) * (cCount + 1) / 2;

        return count;
    }
};