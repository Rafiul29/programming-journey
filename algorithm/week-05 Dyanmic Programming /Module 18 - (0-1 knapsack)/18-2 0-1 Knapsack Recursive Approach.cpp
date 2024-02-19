
#include <bits/stdc++.h>
using namespace std;
const int maxN = 100;
const int maxW = 100;
int dp[maxN][maxW];

int kanpsack(int n, int weight[], int value[], int W)
{
  if (n < 0 || W == 0)
  {
    return 0;
  }
  if (dp[n][W] != -1)
  {
    return dp[n][W];
  }
  if (weight[n] <= W)
  {
    int op1 = kanpsack(n - 1, weight, value, W - weight[n]) + value[n];
    int op2 = kanpsack(n - 1, weight, value, W);
    return dp[n][W] = max(op1, op2);
  }
  else
  {

    int op2 = kanpsack(n - 1, weight, value, W);
    return dp[n][W] = op2;
  }
}
int main()
{

  int n, W;
  cin >> n >> W;
  int weight[n], value[n];

  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> value[i];
  }
  for (int i = 0; i < maxN; i++)
  {
    for (int j = 0; j < maxW; j++)
    {
      dp[i][j] = -1;
    }
  }

  cout << kanpsack(n - 1, weight, value, W) << endl;
}