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
    int maxDepth(TreeNode* root) {
        if (!root) 
            return 0 ;
            
        if (root && !root->left && !root->right) 
            return 1; 
        else if (root->left && !root->right)
            return 1 + maxDepth (root->left) ;
        else if (root->right && !root->left)
            return 1 + maxDepth (root->right) ;
        else  {
            int leftDepth = 1 + maxDepth(root->left) ;
            int rigthDepth = 1 + maxDepth(root->right) ;
            return (leftDepth > rigthDepth)? leftDepth : rigthDepth ;
        }
    }
};