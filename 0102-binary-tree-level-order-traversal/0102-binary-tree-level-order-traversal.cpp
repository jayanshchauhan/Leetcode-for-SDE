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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qu;
        vector<vector<int>> ans;
        qu.push(root);
        if(root == NULL){
            return ans;
        }
        while(!qu.empty()){
            int size = qu.size();
            vector<int> res;
            for(int i=0;i<size;i++){
                TreeNode* temp = qu.front();
                qu.pop();
                if(temp && temp->left!=NULL){
                    qu.push(temp->left);
                }
                if(temp && temp->right){
                    qu.push(temp->right);
                }
                if(temp)
                res.push_back(temp->val);
            }
            ans.push_back(res);
        }
        return ans;
    }
};