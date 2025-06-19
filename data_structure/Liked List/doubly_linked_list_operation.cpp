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
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
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
  head = newNode; // head=newNode;
}

void insert_any_position_node(Node *&head, int val, int pos)
{
  Node *newNode = new Node(val);

  Node *temp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    if (temp == NULL)
    {
      cout << "Invalid index" << endl;
      return;
    }
    temp = temp->next;
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

void delete_head_node(Node *&head, Node *&tail)
{
  if (head == NULL)
  {
    cout << "Link is empty" << endl;
    return;
  }

  // store the delete node
  Node *deleteNode = head;
  // If there's only one node in the list
  if (head->next == NULL && head->prev == NULL)
  {

    head = NULL;
    tail = NULL;
    delete deleteNode;
    cout << "Node deleted" << endl;
    return;
  }

  head = head->next;
  head->prev = NULL;
  delete deleteNode;
  cout << "Node deleted" << endl;
}

void delete_tail_node(Node *&head, Node *&tail)
{

  if (tail == NULL)
  {
    cout << "Link is empty" << endl;
    return;
  }

  // store the delete node
  Node *deleteNode = tail;
  // If there's only one node in the list
  if (tail->next == NULL && tail->prev == NULL)
  {
    head = NULL;
    tail = NULL;
    delete deleteNode;
    cout << "Node deleted" << endl;
    return;
  }

  tail = tail->prev;
  tail->next = NULL;
  delete deleteNode;
  cout << "Node deleted" << endl;
}

void delete_at_position_node(Node *&head, int pos)
{
  if (head == NULL)
  {
    cout << "Link is empty" << endl;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    if (temp == NULL)
    {
      cout << "Invalid index" << endl;
      return;
    }
    temp = temp->next;
  }
  if (temp->next == NULL)
  {
    cout << "Invalid index" << endl;
    return;
  }
  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  temp->next->prev = temp;
  delete deleteNode;
}
void print_normal(Node *head)
{
  if (head == NULL)
  {
    cout << "Link is empty" << endl;
    return;
  }

  Node *temp = head;
  cout<<"Print normal"<<endl;
  while (temp != NULL)
  {
    cout << temp->val << " -> ";
    temp = temp->next;
  }
  cout << endl;
}

void print_reverse(Node *tail)
{
  if (tail == NULL)
  {
    cout << "List is empty" << endl;
    return;
  }

  Node *temp = tail;

  cout << "Reversed list: ";
  while (temp != NULL)
  {
    cout << temp->val << " "; 
    temp = temp->prev;        
  }
  cout << endl;
}

void reverse_doubly_link_list(Node *head,Node *tail)
{
  if (head == NULL)
  {
    cout << "List is empty" << endl;
    return;
  }

  Node *i = head;
  Node *j = tail;

  while (i!=j && i->next!=j)
  {
    swap(i->val,j->val);
    i=i->next;
    j=j->prev;
  }
  swap(i->val,j->val);
}

int main()
{

  Node *head = NULL;
  Node *tail = NULL;

  while (1)
  {
    int val;
    cout << "Enter number (-1 to stop): ";
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_tail_node(head, tail, val);
  }

  while (true)
  {
    cout << "1. Insert head : " << endl;
    cout << "2. Insert tail : " << endl;
    cout << "3. Insert at any position : " << endl;
    cout << "4. Delete head Node : " << endl;
    cout << "5. Delete tail Node : " << endl;
    cout << "6. Delete at position Node : " << endl;
    cout << "7. Print Reverse Linked List : " << endl;
    cout << "8. Print Normal Linked List : " << endl;
    cout << "9. Reverse doubly link list: "<<endl;
    cout << "10. Break : " << endl;
    cout << "Enter your choice: ";
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
    else if (ch == 4)
    {
      delete_head_node(head, tail);
    }
    else if (ch == 5)
    {
      delete_tail_node(head, tail);
    }
    else if (ch == 6)
    {
      int pos;
      cout << "Delete position : ";
      cin >> pos;
      delete_at_position_node(head, pos);
    }
    else if (ch == 7)
    {
      print_reverse(tail);
    }
    else if (ch == 8)
    {
      print_normal(head);
    }
     else if (ch == 9)
    {
      reverse_doubly_link_list(head,tail);
    }
    else if (ch == 10)
    {
      break;
    }
  }

  return 0;
}