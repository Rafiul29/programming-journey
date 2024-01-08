#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
         
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    
    if(val==-1){
        root==NULL;
        return 0;
    } else{
        root=new Node(val);
    } 
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        
        Node* left;
        Node* right;
        
        if(l==-1) left=NULL;
        else left=new Node(l);
        
        if(r==-1) right=NULL;
        else right=new Node(r);
        
        p->left=left;
        p->right=right;
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    } 
    
    return root;
}



void print(Node * root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
}

void insert(Node* &root,int x){
 if(root==NULL){
     root==new Node(x);
     return;
 } 
 if(x<root->val){
     if(root->left==NULL){
         root->left=new Node(x);
     }else{
         insert(root->left,x);
     }
 }else{
     if(root->right==NULL){
         root->right=new Node(x);
     }else{
         insert(root->right,x);
     }
 }   
}

int main()
{
   Node* root=input_tree();
  int x;
  cin>>x;
  insert(root,x);
  
  print(root);
    return 0;
}