#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<long long int> V(N);
  for (int i = 0; i < N; i++)
  {
    cin >> V[i];
  }

  vector<long long int> prefix_sum(N);
  prefix_sum[0] = V[0];

  for (int i = 1; i < N; i++)
  {
    prefix_sum[i] = prefix_sum[i - 1] + V[i];
  }

  for (int i = 0; i < Q; i++)
  {
    int L, R;
    cin >> L >> R;
    L--;
    R--;
    long long int sum = 0;
    if (L == 0)
    {
      sum = prefix_sum[R];
    }
    else
    {
      sum = prefix_sum[R] - prefix_sum[L - 1];
    }
    cout << sum << endl;
  }

  for (int i = 0; i < N; i++)
  {
    cout << prefix_sum[i] << " ";
  }
  cout << endl;
  return 0;
}