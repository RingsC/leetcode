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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> node_stk; 
        if (!root) return root; 
        
        node_stk.push(root) ;
        while (!node_stk.empty()) {
            TreeNode* curr = node_stk.top () ;
            node_stk.pop (); 
            if (curr) {
                node_stk.push (curr->left);
                node_stk.push (curr->right);
                swap (curr->left, curr->right) ;
            }
        }
        
        return root; 
    }
};