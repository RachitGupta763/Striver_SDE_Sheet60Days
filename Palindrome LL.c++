#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> * findMid(LinkedListNode<int> *head){
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
LinkedListNode<int> *reverse(LinkedListNode<int> *temp){
     LinkedListNode<int>* next1=temp;
     LinkedListNode<int>* prev=NULL;

     while(temp!=NULL){
         next1=temp->next;
         temp->next=prev;
         prev=temp;
         temp=next1;
     }
return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    
    if(head==NULL || head->next==NULL){
        return true;
    }
    LinkedListNode<int> *mid=findMid(head);
    LinkedListNode<int> *temp=mid->next;

    mid->next=reverse(temp);

    LinkedListNode<int> *head1=head;
    LinkedListNode<int> *head2=mid->next;

    while(head2!=NULL){
        if(head1->data!=head2->data)return false;

        head1=head1->next;
        head2=head2->next;
    }

    return true;

}