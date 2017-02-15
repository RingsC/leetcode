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
    ListNode* findPosByVal (ListNode* node, int val) 
    {
        if (node == NULL) return NULL; 
        ListNode* ptr = node ;
        while (ptr->next && ptr->next->val < val ){
            ptr = ptr->next; 
        }
        return ptr; 
    }
    
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head; 
        
        ListNode dummy(INT_MIN) ;
        ListNode* ptr = head; 
        
        while (ptr) {
            ListNode* pos = findPosByVal(&dummy, ptr->val) ;
            ListNode* tmp = ptr; 
            ptr = ptr->next; 
            
            tmp->next= pos->next;
            pos->next = tmp; 
        }
        
        return dummy.next;
    }
};