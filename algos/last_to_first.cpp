void movenodetofront(node* head_ref){
 // we have a linked list passed
 // remove the last element from the list and add it front of the list 
 // store the address of the last node, last second node 
 	if(head_ref == NULL || head_ref->next==NULL) return;
	Node * curr = head_ref;
	Node * last, second_last;
 	while(curr->next!=NULL){
 			second_last = curr;
			last = curr->next;
			curr = curr->next;
 		}
		second_last->next = NULL;
		last->next = head;
		head = last;
}