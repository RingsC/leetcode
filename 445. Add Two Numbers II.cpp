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
        stack<int> num1, num2 ;
        ListNode* ptr1  = l1 ; 
        ListNode* ptr2 =  l2 ;
        
        while (ptr1 && ptr2) {
            num1.push (ptr1->val) ;
            num2.push (ptr2->val) ;
            
            ptr1 = ptr1->next; 
            ptr2 = ptr2->next; 
        }
        
        while (ptr1) {
            num1.push(ptr1->val) ;
            ptr1 = ptr1->next; 
        }
        
        while (ptr2){
            num2.push(ptr2->val) ;
            ptr2 = ptr2->next; 
        }
        
        int carrier (0), remain(0) ;
        
        ListNode dummy(-1) ;
        
        while (!num1.empty() && !num2.empty()) {
            int res = num1.top() + num2.top() + carrier;
            carrier = res / 10;
            remain = res % 10 ;
            
            ListNode* node = new ListNode (-1) ;
            node->val  = remain; 
            node->next = dummy.next ;
            dummy.next = node; 
            
            num1.pop ();
            num2.pop ();
        }
        
        while (!num1.empty()) {
            int res = num1.top () + carrier ;
            carrier = res / 10 ;
            remain = res % 10 ;
            
            ListNode* node = new ListNode (-1) ;
            node->val  = remain; 
            node->next = dummy.next ;
            dummy.next = node; 
            
            num1.pop () ;
        }
        
        while (!num2.empty()) {
            int res = num2.top () + carrier ;
            carrier = res / 10 ;
            remain = res % 10 ;
            
            ListNode* node = new ListNode (-1) ;
            node->val  = remain; 
            node->next = dummy.next ;
            dummy.next = node; 
            
            num2.pop () ;
        }
        
        if (carrier) {
            ListNode* node = new ListNode (-1) ;
            node->val  = carrier; 
            node->next = dummy.next ;
            dummy.next = node; 
        }
        
        return dummy.next;
    }
};