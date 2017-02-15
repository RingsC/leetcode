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
    int getDepthMin (TreeNode* node, int path) {
        if (!node->left && !node->right)
            return path ;
        else {
            int left(INT_MAX) , right(INT_MAX); 
            if (node->left)
                left = getDepthMin (node->left, path +1) ;
            if (node->right)
                right = getDepthMin (node->right, path +1);
            
            return (left < right)? left : right; 
        } 
            
    }
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        if (!root->left && !root->right) return 1; 
        
        return getDepthMin (root, 1) ;
    }
};