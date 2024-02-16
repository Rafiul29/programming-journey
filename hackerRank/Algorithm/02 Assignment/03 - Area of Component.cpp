// Problem Statement

// You will be given a 2D matrix of size

// which will contain only dot(.) and minus(-) where dot(.) means you can go in that cell and minus(-) means you can't.

// You can move in only 4 directions (Up, Down, Left and Right).

// The area of a component is the number of dots(.) in that component that can be accessible. You need to tell the minimum area of all available components.

// Note: If there are no components, print -1.

// Input Format

//     First line will contain

// and

//     .
//     Next you will be given the 2D matrix.

// Constraints

// Output Format

//     Output the minimum area.

// Sample Input 0

// 6 5
// ..-..
// ..-..
// -----
// .-...
// .----
// .....

// Sample Output 0

// 3

// Sample Input 1

// 3 3
// ---
// ---
// ---

// Sample Output 1

// -1

#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int mat[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
bool isvalid(int i, int j)
{
  return !vis[i][j] && mat[i][j] != -1 && i >= 0 && i < n && j >= 0 && j < m;
}

int dfs(int si, int sj)
{
  int c = 1;
  vis[si][sj] = true;
  for (int i = 0; i < 4; i++)
  {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (isvalid(ci, cj))
    {
      c += dfs(ci, cj);
    }
  }
  return c;
}

int main()
{

  vector<int> v;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
      if (s[j] == '-')
        mat[i][j] = -1;
    }
  }

  memset(vis, false, sizeof(vis));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (vis[i][j] == false && mat[i][j] == 0)
      {
        v.push_back(dfs(i, j));
      }
    }
  }

  sort(v.begin(), v.end());

  if (v.empty())
  {
    cout << -1 << endl;
  }
  else
  {
    cout << v[0] << endl;
  }

  return 0;
}
