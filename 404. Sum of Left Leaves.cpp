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
    int sumOfLeftLeaves(TreeNode* root, bool isleft= false) {
        if (!root) return 0 ;
        int sum (0) ;
        
        if (!root->left && !root->right && isleft) {
            sum += root->val ; 
            return sum; 
        } else if (!root->left && root->right) {
            sum += sumOfLeftLeaves (root->right, false) ;
            return sum;  
        } else if (root->left && !root->right) {
            sum += sumOfLeftLeaves (root->left, true) ;
            return sum; 
        } else {
            sum += sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false) ;
            return sum; 
        }
        
        return sum; 
    }
};