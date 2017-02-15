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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> level_node_que;
        vector<vector<int>> res; 
        vector<int> level_vect;
        
        if (!root) return res; 
        
        level_node_que.push (root) ;
        level_node_que.push (NULL) ;
        while (!level_node_que.empty()) {
            TreeNode* curr = level_node_que.front () ;
            level_node_que.pop () ;
            if (curr == NULL) {
                res.push_back (level_vect) ;
                level_vect.resize(0) ;
                if (level_node_que.size()>0) 
                    level_node_que.push(NULL) ;
            } else {
                
                level_vect.push_back (curr->val) ;
                if (curr->left)
                    level_node_que.push(curr->left);
                if (curr->right)
                    level_node_que.push(curr->right);
            }
        }
        return res; 
    }
};