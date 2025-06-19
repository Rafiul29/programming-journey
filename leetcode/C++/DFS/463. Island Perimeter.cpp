class Solution
{
public:
  bool vis[105][105];
  int ans;
  int n, m;
  vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

  bool isValid(int ci, int cj)
  {
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
      return true;
    else
      return false;
  }
  void dfs(int si, int sj, vector<vector<int>> &grid)
  {
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
      int ci = si + d[i].first;
      int cj = sj + d[i].second;

      if (isValid(ci, cj))
      {
        if (grid[ci][cj] == 0)
        {
          ans++;
        }
      }
      else
      {
        ans++;
      }
      if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
      {
        dfs(ci, cj, grid);
      }
    }
  }
  int islandPerimeter(vector<vector<int>> &grid)
  {
    memset(vis, false, sizeof(vis));
    ans = 0;
    n = grid.size();
    m = grid[0].size();
    for (int i = 0; i < grid.size(); i++)
    {
      for (int j = 0; j < grid[i].size(); j++)
      {

        if (!vis[i][j] && grid[i][j] == 1)
        {
          dfs(i, j, grid);
        }
      }
    }
    return ans;
  }
};