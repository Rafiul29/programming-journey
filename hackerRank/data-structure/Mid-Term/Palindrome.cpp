// roblem Statement

// You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

// Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

// Input Format

//     Input will contain the values of the doubly linked list, and will terminate with -1.

// Constraints

//     1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
//     0 <= V <= 1000; Here V is the value of each node.

// Output Format

//     Output "YES" if it forms a palindrom otherwise output "NO".

// Sample Input 0

// 1 2 3 2 1 -1

// Sample Output 0

// YES

// Sample Input 1

// 1 2 2 1 -1

// Sample Output 1

// YES

// Sample Input 2

// 1 -1

// Sample Output 2

// YES

// Sample Input 3

// 1 2 3 1 -1

// Sample Output 3

// NO


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

int size(Node *head){
     Node *tmp=head;
     int cnt=0;
    while(tmp!=NULL){
       cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

bool isPalindrome(Node* head,Node* tail){
    int i=0;
    int j=size(head)-1;
    while(i<=j){
        if(head->val!=tail->val){
            return false;
        }
        i++;
        j--;
        head=head->next;
        tail=tail->prev;
    }
    return true;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;

  
  while(true){   
    int val;
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head,tail,val);
  }
  

    if(isPalindrome(head,tail)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }  
    return 0;
}