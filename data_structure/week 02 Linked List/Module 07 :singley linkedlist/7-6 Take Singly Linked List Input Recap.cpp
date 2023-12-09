#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int val;
     Node* next;
     
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

//O(n);
void insert_at_position(Node *head,int pos,int val){
    Node *newNode=new Node(val);
    Node *temp=head;
    
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void print_liked_list(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
// O(n);
int size(Node *head){
      Node *tmp=head;
      int count=0;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
// O(1)
void insert_head(Node *&head,int val){
    Node *newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}

void insert_tail(Node *head,Node *tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

//O(n)
void delete_node(Node *head,int pos){
    
    Node *temp=head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
//O(1)
void delete_head(Node *&head){
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
}

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,v)
    }
    
}