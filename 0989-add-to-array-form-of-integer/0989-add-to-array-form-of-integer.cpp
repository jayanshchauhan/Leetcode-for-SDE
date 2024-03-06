class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1;
        while (k) {
            k += (i >= 0 ? num[i] : 0);

            if (i >= 0){
                num[i--] = k % 10;
            }
            else{
                num.insert(num.begin(), k % 10);
            }
            k /= 10;
        }
        return num;
    }
};