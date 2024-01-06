// Problem Statement

// You will be given a binary tree as input in level order. Also you will be given a level
// . You need to print all the node's values in that level from left to right. Assume that level starts from

// .

// For example:

// image

// If

// , then the output for the above tree will be: 40 50 60

// Note: If the level

// is not a valid level, the print "Invalid".

// Input Format

//     Input will contain the binary tree in level order.

//     means there is no node available.

// Constraints

// Maximum number of nodes Node's value

// Output Format

//     Output all the node's values in level

//     .

// Sample Input 0

// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 0

// Sample Output 0

// 10

// Sample Input 1

// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 1

// Sample Output 1

// 20 30

// Sample Input 2

// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 2

// Sample Output 2

// 40 50 60

// Sample Input 3

// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 3

// Sample Output 3

// Invalid

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

Node *input_tree()
{
  int val;
  cin >> val;
  Node *root;

  if (val == -1)
  {
    root == NULL;
    return 0;
  }
  else
  {
    root = new Node(val);
  }
  queue<Node *> q;
  if (root)
    q.push(root);
  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;

    Node *left;
    Node *right;

    if (l == -1)
      left = NULL;
    else
      left = new Node(l);

    if (r == -1)
      right = NULL;
    else
      right = new Node(r);

    p->left = left;
    p->right = right;

    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }

  return root;
}
int level(Node *root)
{
  if (root == NULL)
    return 0;
  int l = level(root->left);
  int r = level(root->right);
  return max(l, r) + 1;
}

void print_level_nodes(Node *root, int l)
{
  queue<pair<Node *, int>> q;
  if (root)
    q.push({root, 0});
  while (!q.empty())
  {
    pair<Node *, int> pr = q.front();
    q.pop();
    Node *node = pr.first;
    int level = pr.second;
    if (level == l)
    {
      cout << node->val << " ";
    }

    //    Write your code here
    if (node->left)
    {
      q.push({node->left, level + 1});
    }
    if (node->right)
    {
      q.push({node->right, level + 1});
    }
  }
}

int main()
{
  Node *root = input_tree();
  int l;
  cin >> l;

  if (level(root) - 1 >= l && l >= 0)
  {
    print_level_nodes(root, l);
  }
  else
  {
    cout << "Invalid";
  }

  return 0;
}
