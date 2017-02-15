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
    void binaryTreePath (TreeNode* root, vector<string>& res, string path) 
    {
        if (!root->left && !root->right)
            res.push_back (path) ;
        else {
            if (root->left)
                binaryTreePath(root->left, res, path + "->" + to_string(root->left->val)) ;
            if (root->right)
                binaryTreePath(root->right, res, path + "->" + to_string(root->right->val)) ;
                
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res ;
        if (!root) return res; 
        
        binaryTreePath (root, res, to_string(root->val)) ;
        return res;
    }
};