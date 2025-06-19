#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
  p = NULL;
}

int main()
{
  int a = 10;
  int *p = &a;
  fun(p);
  // if (p == NULL)
  // {
  //   cout << "P is NULL";
  // }
  // else
  // {
    cout << *p << endl;
  // }

  return 0;
}