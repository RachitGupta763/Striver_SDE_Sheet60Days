/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{    int count=0;
      Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    if(count==1)return new Node(-1);
    
    else if(K==1){
         Node* temp=head;
         while(temp->next->next!=NULL){
         temp=temp->next;
         }
    temp->next=NULL;
    
    }
    else{
   
    Node* node=head;
   
    temp=head;
    for(int i=0;i<count-K;i++){
        if(temp->next!=NULL)
        temp=temp->next;
      
    }
    if (temp->next != NULL) {
      temp->data = temp->next->data;
      temp->next = temp->next->next;
    }

  
    }
    return head;
}