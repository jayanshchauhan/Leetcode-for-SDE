class Solution {
public:
    int jump(vector<int>& nums) {
        int minJmps = 0, nxtJmp = 0;
        for (int i = 0, maxGas = 0, minGas = 0; i < nums.size(); i++, minGas--, maxGas--)
        {
            if (nxtJmp)
            {
                minJmps++;
                nxtJmp = 0;
            }
            if (maxGas < nums[i])
                maxGas = nums[i];
            if (minGas == 0)
            {
                minGas = maxGas;
                nxtJmp = 1;
            }
        }
        return minJmps;
    }
};