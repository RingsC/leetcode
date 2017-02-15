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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1 ;
        ListNode* ptr2 = l2;
        ListNode* lastNode = l1 ;
        int remainder(0), carrier(0), sum (0) ;
        while (ptr1 != NULL && ptr2 != NULL) {
            
            lastNode = ptr1;
            sum = (ptr1->val + ptr2->val + carrier) ;
            remainder = sum % 10 ;
            carrier = sum /10 ;
            
            if (carrier) //have carrier
                ptr1->val = remainder; 
            else
                ptr1->val = sum; 
            
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            
        }//while    
        
        while (ptr1) {//the reslt of l2, attach to l1
            lastNode  = ptr1 ;
            sum = (carrier + ptr1->val) ;
            remainder = sum %10 ;
            carrier = sum /10;
            if (carrier)
               ptr1->val = remainder;
            else 
                ptr1->val = sum ;
            
            ptr1 = ptr1->next ;
        }
        
        lastNode->next = ptr2; 
        while (ptr2) {//the reslt of l2, attach to l1
            lastNode = ptr2 ;
            sum = (carrier + ptr2->val) ;
            remainder = sum %10 ;
            carrier = sum /10;
            if (carrier)
               ptr2->val = remainder;
            else 
                ptr2->val = sum ;
            
            ptr2 = ptr2->next ;
        }
        
        if (carrier) {
            ListNode* newNode = (ListNode*)malloc (sizeof(ListNode));
            memset (newNode, 0, sizeof (ListNode)) ;
            newNode->val = carrier; 
            newNode->next = NULL ; 
            lastNode->next = newNode; 
        }        
        return l1 ;
    }
};