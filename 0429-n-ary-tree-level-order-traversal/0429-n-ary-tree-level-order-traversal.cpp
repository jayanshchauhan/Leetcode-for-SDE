/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
      
        queue<Node*> q;
        if(root==NULL)
            return res;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
      
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                Node* t=q.front();
                q.pop();
                temp.push_back(t->val);
                int childrenSize = t->children.size();
                for(int j= 0 ; j < childrenSize;j++){
                    if(t->children[j])q.push(t->children[j]);
                }
            }
            res.push_back(temp);
            
        }
 
         return res;
    }
};