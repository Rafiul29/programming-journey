#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> v = {1, 2, 3, 4, 5, 6};

  int i, j;
  i = 0, j = v.size() - 1;

  while (i <= j)
  {
    /* code */
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
  }

  for (int val : v)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}