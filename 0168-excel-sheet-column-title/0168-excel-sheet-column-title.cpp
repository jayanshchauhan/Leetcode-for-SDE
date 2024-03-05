class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber > 0) {
            columnNumber--; // Adjust to start from 1 rather than 0
            char c = 'A' + columnNumber % 26; // Get the character corresponding to the remainder
            result = c + result; // Append the character to the beginning of the result string
            columnNumber /= 26; // Move to the next group of digits
        }
        return result;
    }
};