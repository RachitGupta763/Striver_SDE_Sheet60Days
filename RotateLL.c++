Node *rotate(Node *head, int k) {
     Node* start=head;
     Node* start1=head;
     if(k==0)return head;
     int count=1;
     while(start->next!=NULL){
           start = start->next;
           count++;
     }
     k=k%count;

     start->next=head;
     int e=count-k;
     while(e--){
       start = start->next;
     }
     head=start->next;
    
     start->next=NULL;
     return head;
}