/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
      
        queue<TreeNode*> q;
        if(root==NULL)
            return res;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            double sum = 0;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* t=q.front();
                q.pop();
                sum += t->val;
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            res.push_back(sum/s);
        }
 
         return res;
    }
};