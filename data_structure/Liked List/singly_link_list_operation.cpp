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

void delete_tail_node(Node *&head)
{
  if (head == NULL)
  {
    cout << "Linked list empty" << endl;
    return;
  }

  if (head->next == NULL)
  {

    delete head;
    head = NULL;
    return;
  }

  Node *temp = head;
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  delete deleteNode;
  temp->next = NULL;
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

void insert_head_node(Node *&head, int val)
{
  Node *newNode = new Node(val);
  // if(head==NULL){
  //   head=newNode;
  //   return;
  // }
  newNode->next = head;
  head = newNode;
}

void insert_at_position_node(Node *&head, int val, int pos)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    cout << "Invalid Index" << endl;
    return;
  }

  Node *temp = head;

  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
    if (temp == NULL)
    {
      cout << "Invalid Index" << endl;
      return;
    }
  }

  if (temp->next == NULL)
  {
    cout << "Invalid Index" << endl;
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void delete_head_node(Node *&head)
{
  if (head == NULL)
  {
    cout << "Head already Null" << endl;
    return;
  }
  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;
}

void delete_at_positon_node(Node *&head, int pos)
{
  if (head == NULL)
  {
    cout << "Invalid index" << endl;
    return;
  }
  Node *temp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
    if (temp == NULL)
    {
      cout << "invalid Index" << endl;
      return;
    }
  }

  if (temp->next == NULL)
  {
    cout << "Invalid Index" << endl;
    return;
  }

  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;
}

int size(Node *&head)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

void print_reverse(Node *head)
{
  if (head == NULL)
  {
    return;
  }
  print_reverse(head->next);
  cout << head->val << " ";
}

void sort_linked_list(Node *&head)
{
  for (Node *i = head; i->next != NULL; i = i->next)
  {
    for (Node *j = i->next; j != NULL; j = j->next)
    {
      if (i->val < j->val)
      {
        swap(i->val, j->val);
      }
    }
  }
}


int main()
{
  Node *head = NULL;

  while (1)
  {
    int val;
    cout << "Enter your number: ";
    cin>>val;
    if(val==-1){
      break;
    }
    insert_node_tail(head,val);
  }
  
  cout << "Please choose operation" << endl;
  while (true)
  {
    cout << "1. Insert tail Node" << endl;
    cout << "2. Insert head Node" << endl;
    cout << "3. Insert at postion Node" << endl;
    cout << "4. Delete head Node" << endl;
    cout << "5. Delete at any pos Node" << endl;
    cout << "6. Delete tail Node" << endl;
    cout << "7. Linked List size" << endl;
    cout << "8. Linked List Sort" << endl;
    cout << "10. Print All Node" << endl;
    cout << "11. Print All Node Reverse Order" << endl;
    cout << "12. Break" << endl;

    int ch;
    cin >> ch;

    if (ch == 1)
    {
      int val;
      cout << "Enter your number: ";
      cin >> val;
      insert_node_tail(head, val);
    }
    else if (ch == 2)
    {
      int val;
      cout << "Enter your number: ";
      cin >> val;
      insert_head_node(head, val);
    }
    else if (ch == 3)
    {
      int val, pos;
      cout << "Enter your number: ";
      cin >> val;
      cout << "Postion: ";
      cin >> pos;
      insert_at_position_node(head, val, pos);
    }
    else if (ch == 4)
    {
      delete_head_node(head);
      print_all_node(head);
    }
    else if (ch == 5)
    {
      int pos;
      cout << "Delete Positon :";
      cin >> pos;
      delete_at_positon_node(head, pos);
      print_all_node(head);
    }
    else if (ch == 6)
    {
      delete_tail_node(head);
    }
    else if (ch == 7)
    {
      int res = size(head);
      cout << "size of :" << res << endl;
    }
    else if (ch == 8)
    {
      sort_linked_list(head);
    }
    else if (ch == 10)
    {
      print_all_node(head);
    }
    else if (ch == 11)
    {
      print_reverse(head);
    }
    else if (ch == 12)
    {
      break;
    }
  }
  return 0;
}