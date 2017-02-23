ListNode* rotatListByStepK (ListNode* list, int k)	
{
	ListNode* ptr = list; 	
	while (ptr && ptr->next) {
		ptr = ptr->next; 
	}
	ptr->next = list; //make a circular linked list; 

	ptr = list; 
	int step = 0;

	ListNode* pre = list ;
	ListNode dummy(0) ;
	ListNode* newList = &dummy; 
	while (ptr){
		pre  = ptr ; 
		ptr = ptr->next; 
		step ++ ; 

		if (step % k  ==0){
			newList->next = ptr ; 
			newList = ptr; 
			pre->next = ptr ->next; //delete from circular linked list; and add to the new linked list;

			ptr = pre->next; 
			newList->next = 0;
		}
	}
	return dummy.next; 
}