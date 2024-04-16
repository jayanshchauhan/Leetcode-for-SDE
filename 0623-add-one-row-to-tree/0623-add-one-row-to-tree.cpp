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
    void helper(TreeNode* root,int cur,int val,int depth){
        if(root==NULL){
            return;
        }
        
        if(cur+1 == depth){
            TreeNode* leftNode = new TreeNode(val);
            TreeNode* rightNode = new TreeNode(val);
            leftNode->left = root->left;
            rightNode->right = root->right;
            root->left = leftNode;
            root->right = rightNode;
             return;
            // if(root->left){
            //     TreeNode* l = root->left;
            //     TreeNode* temp = new TreeNode(val);
            //     root->left = temp;
            //     temp->left = l;
            //     temp->right = NULL;
            // }
            // if(root->right){
            //     TreeNode* r = root->right;
            //     TreeNode* temp = new TreeNode(val);
            //     root->right = temp;
            //     temp->right = r;
            //     temp->left = NULL;
            // }
            // if(root->left == NULL  && root->right == NULL){
            //     TreeNode* temp = new TreeNode(val);
            //     temp->left = NULL;
            //     temp->right = NULL;
            //     root->left = temp;
            //     root->right = temp;
            // }
        }
        helper(root->left,cur+1,val,depth);
        helper(root->right,cur+1,val,depth);
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        helper(root,1,val,depth);
        return root;
    }
};

/*
void dfs(TreeNode* root, int val, int depth, int currentDepth) {
        if (root == nullptr) return;
        if (currentDepth == depth - 1) {
            TreeNode* leftNode = new TreeNode(val);
            TreeNode* rightNode = new TreeNode(val);
            leftNode->left = root->left;
            rightNode->right = root->right;
            root->left = leftNode;
            root->right = rightNode;
            return;
        }
        dfs(root->left, val, depth, currentDepth + 1);
        dfs(root->right, val, depth, currentDepth + 1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        dfs(root, val, depth, 1);
        return root;
    }
*/