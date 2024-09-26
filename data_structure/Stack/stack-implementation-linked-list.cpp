#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void push_stack(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void pop_stack(Node *&head)
{
  if (head == NULL)
  {
    cout << "stack is empty" << endl;
  }

  Node *deleteNode = head;
  if (head->next == NULL)
  {
    head = NULL;
    delete deleteNode;
  }
  head = head->next;
  delete deleteNode;
}

void top_stack(Node *&head)
{
  if (head == NULL)
  {
    cout << "stack is empty" << endl;
  }
  cout << head->val << endl;
}

bool isEmty_stack(Node *head)
{
  if (head == NULL)
  {
    return true;
  }
  return false;
}

void print_linked_list(Node *head)
{
  if (head == NULL)
  {
    return;
  }
  cout << head->val << " ";
  print_linked_list(head->next);
}

int stack_size(Node *head)
{
  if (head == NULL)
  {
    return 0;
  }
  int sz = stack_size(head->next) + 1;
  return sz;
}

int main()
{
  Node *head = NULL;
  while (1)
  {
    cout << "1. Push stack value" << endl;
    cout << "2. Pop stack value" << endl;
    cout << "3. Top of stack value" << endl;
    cout << "4. Stack size " << endl;
    cout << "5. Print stack " << endl;
    cout << "6. Check Stack is Empty " << endl;
    cout << "7. Terminate " << endl;
    cout << "Choise the number :" << endl;
    int ch;
    cin >> ch;
    if (ch == 1)
    {
      int val;
      cout << "Enter the number : ";
      cin >> val;
      push_stack(head, val);
    }
    else if (ch == 2)
    {
      pop_stack(head);
    }
    else if (ch == 3)
    {
      top_stack(head);
    }
    else if (ch == 4)
    {
      cout << stack_size(head) << endl;
    }
    else if (ch == 5)
    {
      print_linked_list(head);
    }
    else if (ch == 6)
    {
      if (isEmty_stack(head))
      {
        cout << "stack is empty" << endl;
      }
      else
      {
        cout << "stack is not empty" << endl;
      }
    }
    else if (ch == 7)
    {
      break;
    }
  }

  return 0;
}