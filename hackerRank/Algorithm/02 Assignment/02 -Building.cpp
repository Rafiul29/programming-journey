// Problem Statement

// You have just opened a ISP business and you want to connect your WIFI lines in your area. In your area there are
// buldings and

// roads connecting those buildings. The roads are two way obviously. In each road there is a cost of connecting the cables. You want to connect all buldings in such a way that there is connection from any building to another, not necessary to be directly.

// As you are a businessman, you want the total cost to be minimum. Can you tell the minimum total cost to do the work?

// Note: There can be multiple roads from one building to another. If it is not possible to connect all the building, print
// . Each building has a number from to

// .

// Input Format

//     First line will contain

// and
// .
// Next
// lines will contain , and which means there is a connection in between and where the cost for connecting the cable is

//     .

// Constraints

// Output Format

//     Output the minimum cost.

// Sample Input 0

// 5 7
// 1 2 10
// 1 3 5
// 3 2 4
// 2 4 1
// 3 4 2
// 4 5 3
// 1 5 2

// Sample Output 0

// 8

// Sample Input 1

// 3 2
// 1 2 10
// 2 1 2

// Sample Output 1

// -1

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int group_size[N];
int level[N];
void dsu_inititalize(int n)
{
  for (int i = 1; i <= n; i++)
  {
    par[i] = -1;
    group_size[i] = 1;
  }
}

int dsu_find(int node)
{
  if (par[node] == -1)
    return node;
  int leader = dsu_find(par[node]);
  par[node] = leader;
  return leader;
}

void dsu_union_by_size(int node1, int node2)
{
  int leaderA = dsu_find(node1);
  int leaderB = dsu_find(node2);
  if (group_size[leaderA] > group_size[leaderB])
  {
    par[leaderB] = leaderA;
    group_size[leaderA] += group_size[leaderB];
  }
  else
  {
    par[leaderA] = leaderB;
    group_size[leaderB]++;
  }
}

class Edge
{
public:
  int u, v, w;
  Edge(int u, int v, int w)
  {
    this->u = u;
    this->v = v;
    this->w = w;
  }
};

bool cmp(Edge a, Edge b)
{
  return a.w < b.w;
}

int main()
{

  int n, e;
  cin >> n >> e;
  dsu_inititalize(n);
  vector<Edge> edgeList;
  while (e--)
  {
    int u, v, w;
    cin >> u >> v >> w;
    edgeList.push_back(Edge(u, v, w));
  }

  sort(edgeList.begin(), edgeList.end(), cmp);

  long long int totalcost = 0;
  int edge_added = 0;

  for (Edge ed : edgeList)
  {
    int leaderU = dsu_find(ed.u);
    int leaderV = dsu_find(ed.v);

    if (leaderU == leaderV)
    {
      continue;
    }
    else
    {
      dsu_union_by_size(ed.u, ed.v);
      totalcost += ed.w;
      edge_added++;
    }
  }
  cout << edge_added << endl;
  if (edge_added < n - 1)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << totalcost << endl;
  }

  return 0;
}
