
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6 + 5;
ll a[N];

int main()
{

  int n;
  cin >> n;
  memset(a, 0, sizeof(a));
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }

  cout << a[n] << endl;
}