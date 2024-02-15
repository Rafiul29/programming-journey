// 4
// 0 10 -1 -1
// -1 -1 11 -1
// -1 -1 0 12
// -1 13 12 0


#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
  int a, b, c;
  Edge(int a, int b, int c)
  {
    this->a = a;
    this->b = b;
    this->c = c;
  }
};
int main()
{
  int n;
  cin >> n;
  int mat[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> mat[i][j];
    }
  }

  vector<Edge> edgeList;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] > 0)
      {
        edgeList.push_back(Edge(i, j, mat[i][j]));
      }
    }
  }

  for (Edge edge : edgeList)
  {
    cout << edge.a << " " << edge.b << " " << edge.c << endl;
  }

  return 0;
}