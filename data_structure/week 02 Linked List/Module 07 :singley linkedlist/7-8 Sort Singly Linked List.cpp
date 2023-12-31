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


void insert_tail(Node *&head,Node *&tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}



void print_recursive(Node *temp){
    
    if(temp==NULL) return;
    print_recursive(temp->next);
    cout<<temp->val<<" ";
}

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    // print_recursive(head);
    
    // sort linked list
    //O(n^2)
    for(Node *i=head;i->next!=NULL;i=i->next){
        for(Node *j=i->next;j!=NULL;j=j->next){
            if(i->val>=j->val){
                swap(i->val,j->val);
            }
        }
    }
    
    
    print_liked_list(head);
}



```title: "Course 1",
    instructor: "Instructor 1",
    duration: "4 weeks",
    rating: 4.5,
    description: "This is the first course description.",
    category:["ejdne","ede2","2ede2"],
    price: 49.99,
    students: 100,
    link: "https://example.com/course1"```