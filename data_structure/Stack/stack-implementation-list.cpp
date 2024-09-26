#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
  list<int> l;
  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    l.pop_back();
  }
  void top()
  {
    cout << l.back() << endl;
  }
  void size()
  {
    cout << l.size() << endl;
  }
 bool empty()
  {
    if(l.size()==0){
      return true;
    }
    return false;
  }
};

int main()
{
  myStack st;
   while (1)
  {
    cout << "1. Push stack value" << endl;
    cout << "2. Pop stack value" << endl;
    cout << "3. Top of stack value" << endl;
    cout << "4. Stack size " << endl;
    // cout << "5. Print stack " << endl;
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
      st.push(val);
    }
    else if (ch == 2)
    {
      if (st.empty())
      {
        cout << "stack is empty" << endl;
      }
      else
      {
       st.pop();
      }
      
    }
    else if (ch == 3)
    {
      st.top();
    }
    else if (ch == 4)
    {
      st.size();
    }
    else if (ch == 6)
    {
      if (st.empty())
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