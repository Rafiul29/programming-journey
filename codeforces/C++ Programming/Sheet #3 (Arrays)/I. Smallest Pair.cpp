// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    long long int res = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        long long int sum = arr[i] + arr[j] + (j + 1) - (i + 1);
        res = min(res, sum);
      }
    }
    cout << res << endl;
  }

  return 0;
}