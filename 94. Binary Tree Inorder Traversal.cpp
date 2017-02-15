/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> node_stk;
        vector<int> res; 
        if (!root) return res; 
        
        node_stk.push(root) ;
        
        while (!node_stk.empty()) {
            TreeNode* curr = node_stk.top();
            node_stk.pop ();
            
            while (curr) {
                node_stk.push (curr);
                curr=curr->left; 
            }
            
            if (!node_stk.empty()) {
                curr = node_stk.top ();
                res.push_back (curr->val) ;
                node_stk.pop ();
                node_stk.push(curr->right) ;
            }
        }
        
        return res; 
    }
};