  Node* Merge(Node* first, Node* second){
        Node* ans = NULL;
        if(!first) return second;
        else if(!second) return first;
        if(first->data <= second->data){
            ans = first;
            ans->next = Merge(first->next,second); // recursive
        }
        else{
            ans = second;
            ans->next = Merge(first,second->next);
        }
        return ans;
    }
    void Middle(Node * curr, Node ** first, Node ** second){
            Node* fast;
            Node* slow;
            slow = curr;
            fast = curr;
            while(!fast or !fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            *first = curr;
            *second = slow->next;
            slow->next = NULL;
    }
    void MergeSorting(Node **head){
        Node * curr = *head;
        Node* first;
        Node * second;
        if(!curr or !curr->next) return;
        Middle(curr,&first,&second);
        MergeSorting(&first);
        MergeSorting(&second);
        *head = Merge(first,second);
    }
   
    Node* mergeSort(Node* head) {
       // your code here
       // divide the linked list first
       MergeSorting(&head);
       return head;
    
    }
	
	// merge sort in linked list 
	