#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

class MyQueue
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  void pop()
  {
    sz--;
    Node *deleteNode = head;

    head = head->next;
 
    delete deleteNode;

    if (head == NULL)
    {
      tail = NULL;
      return;
    }
    head->prev = NULL;
  }
  void front()
  {
    cout << head->val << " ";
  }
  bool isEmpty()
  {
    if (head == NULL && tail == NULL)
      return true;
    else
      return false;
  }
  int size()
  {
    return sz;
  }
};

int main()
{
  MyQueue q;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    q.push(val);
  }

  cout << "Queue size " << q.size() << endl;

  while (!q.isEmpty())
  {
    q.front();
    q.pop();
  }
  cout << endl;

  return 0;
}