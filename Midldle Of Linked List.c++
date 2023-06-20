#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    int len=0;
    Node* temp =head;
      Node* curr =head;
    while(temp !=NULL){
        temp=temp->next;
        len++;
    }
    int ans=len/2;
    int c=0;
    while(c<ans){
        curr=curr->next;
        c++;
    }
    return curr;
}