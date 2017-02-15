/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return NULL ; 
        
        ListNode* ptr = head;
        ListNode* nextNodePtr = NULL ; 
        nextNodePtr = head-> next; 
        
        while (ptr) {
            if (!nextNodePtr) break; 
            if (ptr->val != nextNodePtr->val) { //not same
                ptr = ptr->next ;
                nextNodePtr = nextNodePtr->next; 
            } else {//same
                ListNode* del = nextNodePtr ;
                ptr->next  = nextNodePtr->next ;
                
                nextNodePtr = (nextNodePtr-> next == NULL)? NULL: (nextNodePtr->next);
                free (del) ;
            }https://leetcode.com/submissions/detail/84551801/
        }
        return head;
    }
};