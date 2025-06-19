
#include <bits/stdc++.h>
using namespace std;
char a[25][25];
bool vis[25][25];
int n, m;
int cnt = 0;
vector<pair<int, int>> d;

bool isValid(int ci, int cj)
{
  if (ci >= 0 && ci < n && cj >= 0 && cj < m)
    return true;
  else
    return false;
}

void dfs(int si, int sj)
{
  vis[si][sj] = true;
  cnt++;
  for (int i = 0; i < 4; i++)
  {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (isValid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
    {
      dfs(ci, cj);
    }
  }
}

int main()
{

  d.push_back({0, 1});
  d.push_back({0, -1});
  d.push_back({-1, 0});
  d.push_back({1, 0});

  int t;
  cin >> t;
  int cs = 1;
  while (t--)
  {

    cin >> m >> n;
    int si, sj;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> a[i][j];
        if (a[i][j] == '@')
        {
          si = i;
          sj = j;
        }
      }
    }
    cnt = 0;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    cout << "Case " << cs++ << ": " << cnt << endl;
  }

  return 0;
}