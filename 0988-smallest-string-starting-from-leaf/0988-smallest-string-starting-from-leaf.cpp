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
 //   string smallestString;
    
    string smallestFromLeaf(TreeNode* root) {
        string smallestString = "";
        dfs(root,"",smallestString);
        return smallestString;
    }

    // Helper function to find the lexicographically smallest string
    void dfs(TreeNode* root, string currentString, string &smallestString) {

        // If the current node is NULL, return
        if (!root) {
            return;
        }

        // Construct the current string by appending 
        // the character corresponding to the node's value
        currentString = char(root->val + 'a') + currentString; 

        // If the current node is a leaf node
        if (!root->left && !root->right) {
            
            // If the current string is smaller than the result 
            // or if the result is empty
            if (smallestString == "" || smallestString > currentString) { 
                smallestString = currentString;
            }
        }

        // Recursively traverse the left subtree
        if (root->left) {
            dfs(root->left, currentString, smallestString);
        }

        // Recursively traverse the right subtree
        if (root->right) {
            dfs(root->right, currentString, smallestString);
        }
    }
};