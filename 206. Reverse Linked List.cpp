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
    ListNode* reverseList(ListNode* head) {
        if (!head) return head; 

        ListNode* nextNodePtr = head->next; 
        ListNode* revPtr = head; 
        head->next = NULL ; 
        while (nextNodePtr) {
            ListNode* temp = nextNodePtr ; 
            nextNodePtr= nextNodePtr->next; 
            temp->next= revPtr ;
            revPtr = temp ; 
        }
        return revPtr; 
    }
};