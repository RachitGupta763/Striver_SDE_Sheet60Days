int findDiff(Node *head1, Node *head2){
    int cnt1=0,cnt2=0;

    while(head1 != NULL || head2 != NULL){
        if(head1){
            head1=head1->next;
            cnt1++;
        }
        if(head2){
            head2=head2->next;
            cnt2++;
        }
    }
    return cnt1-cnt2;
}
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *f=firstHead;
    Node *s=secondHead;

    int diff=findDiff(firstHead,secondHead);

    if(diff<0){
        while(diff++ != 0)s=s->next;
    }
    else{
        while(diff-- != 0)f=f->next;
    }
    while(f!=NULL){
        if(f == s)return f;

        f=f->next;
        s=s->next;
    }
    return f;
}
/*    
    Node *s=secondHead;

    while(secondHead){
         Node *f=firstHead;
         while(f){
             if(f==secondHead)return secondHead;
             f=f->next;
         }
         secondHead=secondHead->next;
    }

 return NULL;*/