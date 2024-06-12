class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, n = nums.size();
    
	
        for(int i=0;i<n;i++)
            if(nums[i] == 0) r++;
            else if(nums[i]== 1) w++;


        for(int i=0;i<n;i++)
            if(r) nums[i] = 0, r--;
            else if(w) nums[i] = 1, w--;
            else nums[i] = 2;
    }
};