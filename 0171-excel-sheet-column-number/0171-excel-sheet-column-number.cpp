class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length()-1;
        int res = 0;
        for(int i=0;i<=n;i++){
            int c = columnTitle[i] - 'A' + 1;
            res = res*26 + c;
        }
return res;
        // int num = 0;
        // for(int i = 0; i < columnTitle.size(); i++){
        //     int val = columnTitle[i] - 'A' +1; // Calculate the numerical value of the character
        //     num = num*26 + val; // Update the column number
        // }
        // return num;
    }
};