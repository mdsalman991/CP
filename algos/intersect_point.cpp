int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    // write the code 
    int l1=0,l2=0;
    Node* h1 = head1;
    Node* h2 = head2;
    while(h1!=NULL){
        l1++;
        h1 = h1->next;
    }
    while(h2!=NULL){
        l2++;
        h2 = h2->next;
    }
    int diff = (l1>l2)? l1-l2:l2-l1;
    if(l1>l2){
        while(diff--){
            head1 = head1->next;
        }
    }
    else{
         while(diff--){
            head2 = head2->next;
        }
    }
    while(head1!=head2){
        head1 = head1->next;
        head2 = head2->next;
    }
    
   if(head1) return head1->data;
   return -1;
}