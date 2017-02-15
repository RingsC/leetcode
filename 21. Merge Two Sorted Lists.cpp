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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1== NULL) return l2; 
        if (l2 == NULL)return l1;
        
        ListNode* ptr1 = l1; 
        ListNode* ptr2 = l2;
        
        ListNode* result = NULL;
        ListNode* travel  ; 
        if (l1->val < l2->val) {
            result = ptr1; 
            travel = result ; 
            ptr1 = ptr1->next; 
        } else {
            result = ptr2;
            travel =result ; 
            ptr2 = ptr2->next;
            
        }
        
        while (ptr1 && ptr2) {
            if (ptr1->val <= ptr2->val) {//add l1's node,which is less than l2.
                travel->next = ptr1;
                travel = ptr1;
                ptr1= ptr1->next; 
            } else {//otherwise.
                travel->next =ptr2;
                travel = ptr2;
                ptr2 = ptr2->next; 
            }
        }
        if (!ptr1) 
            travel->next = ptr2; 
        if (!ptr2)
            travel->next = ptr1;
        
        return result;
    }
};