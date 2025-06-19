#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    q.push(val);
  }

  cout << "Queue size " << q.size() << endl;

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }

  cout << endl;

  return 0;
}