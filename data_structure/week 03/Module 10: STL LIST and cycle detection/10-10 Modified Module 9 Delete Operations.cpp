void delete_tail(Node &*head,Node *&tail){
    Node *deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail=NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
}

void delete_head(Node *&head,Node *&tail){
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
    if(head==NULL){
        tail=NULL;
        return;
    }
    head->prev=NULL;
}