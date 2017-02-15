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
    ListNode* oddEvenList(ListNode* head) {
        ListNode odd(0); 
        ListNode even(0);
        
        int count(1) ;        
        ListNode* ptr = head; 
        ListNode* oddtail = &odd; 
        ListNode* eventail = &even;
        
        while (ptr) {
            ListNode* tmp = ptr->next; 
            if (count %2 == 0) { //even.
                ptr->next = eventail->next; 
                eventail->next = ptr;
                eventail = ptr; 
            } else {//event
                ptr->next = oddtail->next;
                oddtail->next = ptr; 
                oddtail = ptr;
            }
            ptr = tmp;
            count ++ ;
        }
        oddtail->next = even.next; 
        return odd.next; 
    }
};