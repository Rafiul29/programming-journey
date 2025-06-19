// Problem Statement

// You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.

// Note: You must use a singly linked list; otherwise, you will not receive marks.

// Input Format

//     First line will contain T, the number of test cases.
//     First line of each test case will contain the values of the singly linked list, and will terminate with -1.
//     Second line of each test case will contain X.

// Constraints

//     1 <= T <= 100
//     1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
//     -10^9 <= V <= 10^9; Here V is the value of each node.
//     -10^9 <= X <= 10^9

// Output Format

//     Output the index of X in the linked list.

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

int searchV9-4 Insert at Head and Tail in Doubly Linked Listalue(Node *head, int x){
    Node *tmp=head;
    int indx=0;
    while(tmp!=NULL){
        if(tmp->val==x){
            return indx;
        }
        tmp=tmp->next;
        indx++;
    }
   return -1;
}

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int t;
    cin>>t;
    while(t--){
          int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    int x;
    cin>>x;

  int res= searchValue(head,x);
   cout<<res<<endl;
    head=NULL;
    tail=NULL;
    }
  
}