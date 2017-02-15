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
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* curr ;
        stack<TreeNode*> node_stk; 
        vector<int> res; 
        if (!root) return res; 
        
        node_stk.push (root) ;
        while (!node_stk.empty()) {
            curr = node_stk.top ();
            res.push_back (curr->val) ;
            
            node_stk.pop () ;
            if(curr->right) 
                node_stk.push (curr->right) ;
            if(curr->left)
                node_stk.push (curr->left);
        }
        
        return res; 
    }
};