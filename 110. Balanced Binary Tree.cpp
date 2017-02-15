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
     int treeDepath (TreeNode* node, int depth, bool& flag) {
        if (!node->left && !node->right) 
            return depth; 
        else {
            int left(depth), right (depth) ;
            if (node->left)
                left = treeDepath(node->left, depth + 1, flag) ;
            if (node->right)
                right = treeDepath(node->right, depth + 1, flag) ;
            if (abs(left-right) > 1) 
                flag = false; 
            return (left > right)? left :right; 
        }
        return depth; 
    }
    
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true; 
        if (!root->left && !root->right) return true; 
        
        bool flag (true) ;
        treeDepath (root, 1, flag) ;
        
        return flag; 
    }
};