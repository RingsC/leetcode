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
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root)  return false; 
        bool res(false) ;
        
        if (!root->left && !root->right && root->val == sum) 
            return true; 
        else 
            res = hasPathSum (root->left, sum - root->val) ||  hasPathSum (root->right, sum - root->val) ;

        return res;         

    }
};