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

void print_liked_list(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int main()
{
        Node *head=new Node(10);
        Node *b=new Node(20);
        head->next=b;
        print_liked_list(head);
        // cout<<a->val<<endl;
        // cout<<b->val<<endl;
        // cout<<a->next->val<<endl;
    
}