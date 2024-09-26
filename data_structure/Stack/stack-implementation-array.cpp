#include <bits/stdc++.h>
using namespace std;

void push_stack(vector<int> &v, int val)
{
  v.push_back(val);
}

void pop_stack(vector<int> &v)
{
  if (v.empty())
  {
    cout << "Stack is Empty" << endl;
    return;
  }
  v.pop_back();
}

void top_stack(vector<int> &v)
{
  if (v.empty())
  {
    cout << "Stack is Empty" << endl;
    return;
  }
  cout << "Top of the stack " << v[v.size() - 1] << endl;
}

void size_stack(vector<int> &v)
{
  if (v.empty())
  {
    cout << "Stack is Empty" << endl;
    return;
  }
  cout << "Stack size " << v.size() << endl;
}

int main()
{
  vector<int> v;

  while (1)
  {
    cout << "1. Push stack value" << endl;
    cout << "2. Pop stack value" << endl;
    cout << "3. Top of stack value" << endl;
    cout << "4. Stack size " << endl;
    cout << "5. Print stack " << endl;
    cout << "7. Terminate " << endl;
    cout << "Choise the number :" << endl;
    int ch;
    cin >> ch;
    if (ch == 1)
    {
      int val;
      cout << "Enter the number : ";
      cin >> val;
      push_stack(v, val);
    }
    if (ch == 2)
    {
      pop_stack(v);
    }
    if (ch == 3)
    {
      top_stack(v);
    }
    if (ch == 4)
    {
      size_stack(v);
    }
    if (ch == 5)
    {
      for (int val : v)
      {
        cout << val << " ";
      }
      cout << endl;
    }
    if (ch == 7)
    {
      break;
    }
  }

  return 0;
}