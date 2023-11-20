class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp(2);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
               if(i!=j)
                    if(nums[i]+nums[j]==target)
                    {
                        
                        temp[0]=i;
                        temp[1]=j;
                        return temp;
                    }
            
            }
            
        }
        return temp;
    }
};