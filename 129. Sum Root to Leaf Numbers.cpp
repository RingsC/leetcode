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
    int calculate (vector<int>& numbers) {
        int sum(0); 
        
        for (int i =0; i < numbers.size() ; i++) {
            sum = sum * 10 + numbers[i] ;
        }
        return sum ; 
    }
    
    void binaryTreePath (TreeNode* node, vector<int>& paths, int sum)
    {
        if (!node->left && !node->right) { //leaves
            //sum += node->val ;            
            paths.push_back (sum) ;
        } else {
            if (node->left) {
                binaryTreePath (node->left, paths, sum *10 + node->left->val) ;
            }
            if (node->right) {
                binaryTreePath (node->right, paths, sum *10 + node->right->val) ;
            }
        }
    }
    
    int sumNumbers(TreeNode* root) {
        if (!root) return 0;
        if (!root->left && !root->right) return root->val ;
        
        vector<int> paths; 
        int sum(0);
        binaryTreePath (root, paths, sum*10 + root->val) ;
        
        sum  =0 ;
        for (int i=0; i < paths.size(); i++) {
            sum += paths[i] ;
        }
        return sum; 
    }
};