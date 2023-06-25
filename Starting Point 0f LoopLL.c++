
Node *firstNode(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    Node *start=head;


    while(fast->next && fast->next->next){
       
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast) {
          while (slow != start) {
            slow = slow->next;
            start = start->next;
          }
          return slow;
        }
    }
    return NULL;

}