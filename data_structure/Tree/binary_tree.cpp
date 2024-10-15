#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void preorder_traversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->val << " ";
  preorder_traversal(root->left);
  preorder_traversal(root->right);
}

void postorder_traversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorder_traversal(root->left);
  postorder_traversal(root->right);
  cout << root->val << " ";
}

void inorder_traversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inorder_traversal(root->left);
  cout << root->val << " ";
  inorder_traversal(root->right);
}

void levelorder_traversal(Node *root)
{
  if (root == NULL)
  {
    cout << "Tree is Empty" << endl;
    return;
  }

  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *f = q.front();
    q.pop();

    cout << f->val << " ";

    if (f->left)
    {
      q.push(f->left);
    }
    if (f->right)
    {
      q.push(f->right);
    }
  }
}

int count_number_of_node_binary_tree(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int l = count_number_of_node_binary_tree(root->left);
  int r = count_number_of_node_binary_tree(root->right);
  return l + r + 1;
}

int count_number_of_leaf_node_binary_tree(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  if (root->left == NULL && root->right == NULL)
  {
    return 1;
  }
  int l = count_number_of_leaf_node_binary_tree(root->left);
  int r = count_number_of_leaf_node_binary_tree(root->right);
  return l + r;
}

int max_height_binary_tree(Node *root){
    if(root==NULL){
      return 0;
    }
    int l=max_height_binary_tree(root->left);
    int r=max_height_binary_tree(root->right);
    return max(l,r)+1;
}


int main()
{
  Node *root = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(60);
  Node *d = new Node(50);
  Node *e = new Node(70);
  Node *f = new Node(80);

  root->left = a;
  root->right = b;

  a->left = c;
  b->right = d;

  c->left = e;
  c->right = f;

  cout << "preorder traversal : ";
  preorder_traversal(root);
  cout << endl;

  cout << "postorder traversal : ";
  postorder_traversal(root);
  cout << endl;

  cout << "inorder traversal : ";
  inorder_traversal(root);
  cout << endl;

  cout << "levelorder traversal : ";
  levelorder_traversal(root);
  cout << endl;

  cout << "Count Number of Node Binary Tree : ";
  int nodes = count_number_of_node_binary_tree(root);
  cout << nodes << endl;

  cout << "Count Number of Leaf Node Binary Tree : ";
  int leaf_nodes = count_number_of_leaf_node_binary_tree(root);
  cout << leaf_nodes << endl;

  cout << "Max Height Binary Tree : ";
  int max_height = max_height_binary_tree(root);
  cout << max_height << endl;

  return 0;
}