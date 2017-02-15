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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head; 

        ListNode dummy(-1);
        ListNode** curr = &dummy.next; 
        ListNode* ptr = head; 
        while (ptr && ptr->next) {
            ListNode* tmp1 = ptr; 
            ListNode* tmp2 = ptr->next; 
            ptr = ptr->next->next ;
                        
            tmp1->next = NULL ;
            tmp2->next = tmp1; 
            
            *curr = tmp2;
            curr = &tmp1->next;
        }
        if (ptr){
            *curr = ptr;
        }
        return dummy.next; 
    }
};