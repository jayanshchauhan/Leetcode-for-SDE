class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gas = 0;
        
        for(int i=0;i<nums.size();i++){
            if(gas<0)
                return false;
            else if(gas<nums[i])
                gas = nums[i];
            gas -= 1;    
        }
        return true;
    }
};