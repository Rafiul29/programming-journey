#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
  list<int> l;

  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    l.pop_front();
  }
  void front()
  {
    cout<<l.front()<<" ";
  }
  int size()
  {
    return l.size();
  }
  bool isEmpty()
  {
    return l.empty();
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