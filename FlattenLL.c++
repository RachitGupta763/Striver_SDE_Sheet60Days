Node* mergeList(Node* head1,Node* head2){
	Node* temp=new Node(0);
	Node* ans=temp;

	while(head1!=NULL && head2!=NULL){
		if(head1->data<head2->data){
			temp->child=head1;
			temp=temp->child;
			head1=head1->child;
		}
		else{
			temp->child=head2;
			temp=temp->child;
			head2=head2->child;
		}
	}
	if(head1)temp->child=head1;
	else temp->child=head2;

	return ans->child;
}
Node* flattenLinkedList(Node* head) 
{
	
	/*Node* temp1=head;
	if(temp1 == NULL || temp1->next == NULL){
		return temp1;
	}
	temp1->next=flattenLinkedList(temp1->next);

	temp1=mergeList(temp1,temp1->next);

	return temp1;*/
	if(head == NULL || head->next == NULL) return head;

 

    Node* L2 = flattenLinkedList(head->next);

    head->next = NULL;

    Node* nhead = mergeList(head, L2);

    return nhead;

}