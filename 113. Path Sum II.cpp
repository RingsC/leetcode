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
    void binaryTreePath (TreeNode* node, vector<vector<int> >& paths, vector<int>& path, int sum ,int target) {
        
        if (!node) return ; 
        
        if (!node->left && !node->right && sum == target){
            paths.push_back (path) ;
        } else {
            if (node->left) {
                path.push_back (node->left->val) ;
                binaryTreePath (node->left, paths, path, sum + node->left->val, target) ;
            }
            if (node->right) {
                path.push_back (node->right->val) ;
                binaryTreePath (node->right, paths, path, sum + node->right->val, target) ;
            }
        }
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int> > paths ;
        vector<int> path ;
        
        if (!root) return paths; 
        
        path.push_back (root->val) ;
        binaryTreePath (root, paths, path, root->val, sum) ;
        return paths;
    }
};