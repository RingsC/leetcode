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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head; 
        while (head && head->val == val) { //process head node.
            ListNode* tmp  = head; 
            head = head->next; 
            free (tmp) ;
        }
        
        ListNode* ptr = head; //proces the rest of listnodes.
        ListNode* prev = NULL;
        while (ptr) {
            if (ptr->val == val) {
                ListNode* tmp = ptr;
                prev->next = ptr->next ;
                ptr = ptr->next; 
                free (tmp) ;
            } else {
                prev = ptr ; 
                ptr=  ptr->next; 
            }
        }
        return head; 
    }
};