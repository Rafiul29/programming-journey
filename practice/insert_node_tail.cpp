#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    (*this).val = val;
    (*this).next = NULL;
  }
};

void insert_node_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  cout << endl;
}

void print_all_node(Node *&head)
{
  if (head == NULL)
  {
    return;
  }
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node *head = NULL;
  cout << "Please choose operation" << endl;
  while (true)
  {
    cout << "1. Insert tail Node" << endl;
    cout << "2. Print All Node" << endl;
    cout << "3. Break" << endl;

    int ch;
    cin >> ch;

    if (ch == 1)
    {
      int val;
      cout<<"Enter your number: ";
      cin >> val;
      insert_node_tail(head, val);
    }
    else if (ch == 2)
    {
      print_all_node(head);
    }
    else if (ch == 3)
    {
      break;
    }
  }

  return 0;
}