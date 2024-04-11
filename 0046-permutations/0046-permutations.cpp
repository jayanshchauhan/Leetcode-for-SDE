class Solution {
private:
    void dfs(vector<int>& nums, vector<vector<int>> &res, int start)
    {
        if(start==nums.size())
        {
            res.push_back(nums);
        }
        else
        {
            for(int i=start;i<nums.size();i++)
            {
                swap(nums[start], nums[i]);
                dfs(nums, res, start+1);    
                swap(nums[start], nums[i]);
            }
        }

    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        dfs(nums, res, 0);
        return res;
    }
};