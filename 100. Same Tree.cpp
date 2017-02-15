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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p== NULL && q == NULL) return true ;
        if (!q && p) return false; 
        if (!p && q) return false; 
        
        if (!p->left && !p->right && !q->left && !q->right ) { //leaf node    
            return (p->val == q->val)? true : false; 
        }
        else { 
            return (p->val == q->val ) && isSameTree (p->left, q->left) && isSameTree (p->right, q->right) ;
        }
    }
};