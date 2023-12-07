// Problem Statement

// You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

//     First line will contain the values of the first singly linked list, and will terminate with -1.
//     Second line will contain the values of the second singly linked list, and will terminate with -1.

// Constraints

//     1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
//     0 <= V <= 1000; Here V is the value of each node.

// Output Format

//     Output "YES" or "NO".

// Sample Input 0

// 10 20 30 40 -1
// 10 20 30 40 -1

// Sample Output 0

// YES

// Sample Input 1

// 10 20 30 40 -1
// 10 20 30 -1

// Sample Output 1

// NO

// Sample Input 2

// 10 20 30 40 -1
// 40 30 20 10 -1

// Sample Output 2

// NO

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

void print_linklist(Node *head1){
    Node *tmp=head1;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insert_tail1(Node *&head1,Node *&tail1,int val){
    Node *newNode=new Node(val);
    if(head1==NULL){
        head1=newNode;
        tail1=newNode;
        return;
    }
    tail1->next=newNode;
    tail1=newNode;
}

void insert_tail2(Node *&head2,Node *&tail2,int val){
    Node *newNode=new Node(val);
    if(head2==NULL){
        head2=newNode;
        tail2=newNode;
        return;
    }
    tail2->next=newNode;
    tail2=newNode;
}

void compare_two_list(Node *head1,Node *head2){
    Node *tmp1=head1;
      Node *tmp2=head2;
      int flag=1;
      while(tmp1!=NULL && tmp2!=NULL){
          if(tmp1->val!=tmp2->val){
              flag=0;
          }
          tmp1=tmp1->next;
          tmp2=tmp2->next;
      }
    flag==1? cout<<"YES":cout<<"NO";
}

int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
  
    Node *head2=NULL;
    Node *tail2=NULL;
    int c1=0,c2=0;
    while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail1(head1,tail1,val);
        c1++;
    }
    
      while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail2(head2,tail2,val);
        c2++;
    }
    
    if(c1==c2){
          compare_two_list(head1,head2);
    }else{
        cout<<"NO";
    }

  
}