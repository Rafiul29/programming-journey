#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
char a[N][N];
bool vis[N][N];
int dis[N][N];
int n, m;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
pair<int, int> path[N][N];

bool isValid(int ci, int cj)
{
  if (ci >= 0 && ci < n && cj >= 0 && cj < m)
    return true;
  else
    return false;
}

void bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  dis[si][sj] = 0;
  vis[si][sj] = true;

  while (!q.empty())
  {
    pair<int, int> par = q.front();
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int ci = par.first + d[i].first;
      int cj = par.second + d[i].second;
      if (isValid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
      {
        q.push({ci, cj});
        vis[ci][cj] = true;
        dis[ci][cj] = dis[par.first][par.second] + 1;
        path[ci][cj] = {par.first, par.second};
      }
    }
  }
}

int main()
{

  int si, sj;
  int di, dj;

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == 'R')
      {
        si = i;
        sj = j;
      }
      if (a[i][j] == 'D')
      {
        di = i;
        dj = j;
      }
    }
  }

  memset(vis, false, sizeof(vis));
  memset(dis, -1, sizeof(dis));

  bfs(si, sj);
  if (dis[di][dj] != -1)
  {

    pair<int, int> end = {di, dj};

    vector<pair<int, int>> shortestPath;

    while (end.first != si || end.second != sj)
    {
      shortestPath.push_back(end);
      end = path[end.first][end.second];
    }

    reverse(shortestPath.begin(), shortestPath.end());

    if (!shortestPath.empty())
    {
      for (int i = 0; i < shortestPath.size() - 1; i++)
      {
        a[shortestPath[i].first][shortestPath[i].second] = 'X';
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j];
    }
    cout << endl;
  }

  return 0;
}