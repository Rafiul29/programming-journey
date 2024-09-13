#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *prev;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};

void insert_tail_node(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  tail->next = newNode;
  newNode->prev = tail->next;
  tail = newNode; // tail=tail->next;
}

void insert_head_node(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = head->prev; // head=newNode;
}

void insert_any_position_node(Node *&head, int val, int pos)
{
  Node *newNode = new Node(val);

  Node *temp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    temp = temp->next;
    if (temp == NULL)
    {
      cout << "Invalid index" << endl;
      return;
    }
  }

  if (temp->next == NULL)
  {
    cout << "Invalid index" << endl;
    return;
  }
  
  newNode->next = temp->next;
  temp->next = newNode;
  newNode->next->prev = newNode;
  newNode->prev = temp;
}

void print_all_node(Node *head)
{
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
  Node *tail = NULL;

  while (1)
  {
    int val;
    cout << "Enter number: ";
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_head_node(head, tail, val);
  }

  while (true)
  {
    cout << "1. Insert head : " << endl;
    cout << "2. Inert tail : " << endl;
    cout << "3. Insert at any position : " << endl;
    cout << "10. Print linked list : " << endl;
    cout << "11. Break : " << endl;
    cout << "Enter choose : " << endl;
    int ch;
    cin >> ch;
    if (ch == 1)
    {
      int val;
      cout << "Enter Number : ";
      cin >> val;
      insert_head_node(head, tail, val);
    }
    else if (ch == 2)
    {
      int val;
      cout << "Enter Number : ";
      cin >> val;
      insert_tail_node(head, tail, val);
    }
    else if (ch == 3)
    {
      int val, pos;
      cout << "Enter Number : ";
      cin >> val;
      cout << "Insert Position : ";
      cin >> pos;
      insert_any_position_node(head, val, pos);
    }
    else if (ch = 10)
    {
      print_all_node(head);
    }
    else if (ch = 11)
    {
      break;
    }
  }

  return 0;
}