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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>> level_res_stack ; 
        vector<int> level_res ;
        queue<TreeNode*> level_queue; 
        vector<vector<int>> res; 
        if (!root) 
            return res; 
        
        level_queue.push (root) ;
        level_queue.push (NULL) ;
        while (!level_queue.empty()) {
            TreeNode* curr  = level_queue.front ();
            level_queue.pop();
            
            if (curr == NULL) { // the last level.
                level_res_stack.push(level_res) ;
                level_res.resize(0) ;
                if (level_queue.size()>0) 
                    level_queue.push (NULL);
            } else {
                level_res.push_back (curr->val);
                if (curr->left)
                    level_queue.push(curr->left);
                if (curr->right) 
                    level_queue.push (curr->right);
            }
        }
        
        while (!level_res_stack.empty()) {
            res.push_back (level_res_stack.top()) ;
            level_res_stack.pop ();
        }
        return res; 
    }
};