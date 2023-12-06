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

int main()
{
        Node *head=new Node(10);
        Node *b=new Node(20);
        head->next=b;
        int pos,val;
        cin>>pos>>val;
        if(pos>size(head)){
            cout<<"invalid index"<<endl;
        }else{
            insert_at_position(head,pos,val);
        }
        
        print_liked_list(head);
       
    
}