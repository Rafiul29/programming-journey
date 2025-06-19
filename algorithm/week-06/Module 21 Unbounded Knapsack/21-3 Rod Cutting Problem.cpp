#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];

int unbounded_knapsack(int n, int s, int val[], int w[])
{

  if (n == 0 || s == 0)
    return 0;
  if (dp[n][s] != -1)
    return dp[n][s];
  if (w[n - 1] <= s)
  {
    int ch1 = val[n - 1] + unbounded_knapsack(n, s - w[n - 1], val, w);
    int ch2 = unbounded_knapsack(n - 1, s, val, w);
    return dp[n][s] = max(ch1, ch2);
  }
  else
  {
    return dp[n][s] = unbounded_knapsack(n - 1, s, val, w);
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int val[n], w[n];

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      dp[i][j] = -1;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cin >> val[i];
    w[i] = i + 1;
  }

  cout << unbounded_knapsack(n, n, val, w);
  return 0;
}


// 8
// 2 4 4 5 8 14 12 9
