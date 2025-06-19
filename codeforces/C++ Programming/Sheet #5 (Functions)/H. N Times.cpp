#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
      if (i == n - 1)
      {
        cout << c;
      }
      else
      {
        cout << c << " ";
      }
    }
    cout << endl;
  }
  return 0;
}