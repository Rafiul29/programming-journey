// Problem Statement

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

//     You need to insert the value V at index X. Assume that index starts from 0.
//     After that for each query you need to print the linked list from left to right and right to left.
//     If the index is invalid, then print "Invalid".

// Note: You must use Doubly Linked List, otherwise you will not get marks.

// Input Format

//     First line will contain Q.
//     Next Q lines will contain X and V.

// Constraints

//     1 <= Q <= 1000;
//     0 <= X <= 1000;
//     0 <= V <= 1000

// Output Format

//     For each query print the linked list from left to right and right to left or print "Invalid" as asked.
//     Print "L -> " before printing the linked list from left to right.
//     Print "R -> " before printing the linked list from right to left.

// Sample Input 0

// 5
// 1 10
// 0 10
// 1 20
// 3 30
// 2 30

// Sample Output 0

// Invalid
// L -> 10 
// R -> 10 
// L -> 10 20 
// R -> 20 10 
// Invalid
// L -> 10 20 30 
// R -> 30 20 10 

// Sample Input 1

// 10
// 0 10
// 1 20
// 0 30
// 1 40
// 6 50
// 0 60
// 4 70
// 4 80
// 2 90
// 1 100

// Sample Output 1

// L -> 10 
// R -> 10 
// L -> 10 20 
// R -> 20 10 
// L -> 30 10 20 
// R -> 20 10 30 
// L -> 30 40 10 20 
// R -> 20 10 40 30 
// Invalid
// L -> 60 30 40 10 20 
// R -> 20 10 40 30 60 
// L -> 60 30 40 10 70 20 
// R -> 20 70 10 40 30 60 
// L -> 60 30 40 10 80 70 20 
// R -> 20 70 80 10 40 30 60 
// L -> 60 30 90 40 10 80 70 20 
// R -> 20 70 80 10 40 90 30 60 
// L -> 60 100 30 90 40 10 80 70 20 
// R -> 20 70 80 10 40 90 30 100 60 

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
    if(head==NULL){
        return;
    }
    
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
    cout<<"L -> ";
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_prev(Node *tail){
    Node *tmp=tail;
     cout<<"R -> ";
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

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
  
  int t;
  cin>>t;
  while(t--){
      int x,v;
      cin>>x>>v;
      if(x==0){
           insert_at_head(head,tail,v);
           print_next(head);
           print_prev(tail);
      }else if(size(head)==x){
           insert_at_tail(head,tail,v);
            print_next(head);
            print_prev(tail);
      }else if(size(head)>x){
          insert_at_position(head,x,v);
          print_next(head);
          print_prev(tail);
      }
      else{
          cout<<"Invalid"<<endl;
      }
  }
    
    
    return 0;
}