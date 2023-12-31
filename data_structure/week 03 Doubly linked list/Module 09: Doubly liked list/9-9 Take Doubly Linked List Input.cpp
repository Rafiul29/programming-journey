#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int val;
     Node* next;
     Node* prev;
     
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->next=NULL;
    }
};

void insert_at_position( Node *head,int pos,int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}

void insert_at_head(Node *&head,Node *&tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insert_at_tail(Node *&head,Node *&tail,int val){
    Node *newNode=new Node(val);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}

void print_next(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_prev(Node *tail){
    Node *tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int size(Node *head){
     Node *tmp=head;
     int cnt=0;
    while(tmp!=NULL){
       cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

void delete_at_position(Node *head,int pos){
    Node *temp=head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deleteNode;
}
void delete_tail(Node *&tail){
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

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
   
   int val;
   while(true){
       cin>>val;
       if(val==-1) break;
       insert_at_tail(head,tail,val);
   }
    print_next(head);
    print_prev(tail);
    
    return 0;
}