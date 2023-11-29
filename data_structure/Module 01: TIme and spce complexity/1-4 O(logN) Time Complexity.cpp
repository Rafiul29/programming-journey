#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cout << n << endl;
    n = n / 2;
  }
  cout << sum;
  return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i = i * 2)
  {
    cout << i << endl;
  }

  return 0;
}