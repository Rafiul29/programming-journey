// Problem Statement

// Emperor Alexander is envisioning an extensive network of roads connecting the
// cities in his vast empire. To achieve this, he has devised a plan to construct

// roads, each with its construction cost. However, upon closer examination, it has come to his attention that some of these roads may be redundant, leading to unnecessary expenses. He seeks your expertise in identifying these expendable roads and determining the minimum total construction cost to bring his vision to life. If it is impossible to realize this plan, please convey the message by printing "Not Possible".

// Could you assist Emperor Alexander in finding the number of roads that can be removed from the plan to optimize costs and in calculating the minimum total construction cost?

// Note: There can be multiple roads between two cities in that plan. But there will be no roads from city A to A.

// Input Format

//     First line will contain

// and . Each city is numbered from to
// .
// Next
// lines will contain , and . Which means there is a road between and where construction cost is *

//     .

// Constraints

// Output Format

//     Output the number of roads need to remove, then the minimum construction cost to build the plan. If it's not possible print "Not Possible".

// Sample Input 0

// 4 6
// 1 2 10
// 2 3 4
// 3 4 5
// 4 2 3
// 4 1 5
// 1 3 2

// Sample Output 0

// 3 9

// Explanation 0

// He can build those roads in the following way, so 3 roads will be removed and minimum cost will be 9 to connect all cities.

// image

// Sample Input 1

// 4 4
// 1 2 10
// 1 3 2
// 2 1 5
// 3 1 6

// Sample Output 1

// Not Possible

// Explanation 1

// As there is no way to get to the 4th city, so it is not possible to connect all the cities using this plan.

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
    //   if(edge_added==n-1){
    //       break;
    //   }
    if (ed.u == ed.v)
    {
      edge_added++;
      continue;
    }
    int leaderU = dsu_find(ed.u);
    int leaderV = dsu_find(ed.v);

    if (leaderU == leaderV)
    {
      edge_added++;
      continue;
    }
    else
    {
      dsu_union_by_size(ed.u, ed.v);
      totalcost += ed.w;
    }
  }

  int connec = 0;
  for (int i = 1; i <= n; i++)
  {
    if (par[i] == -1)
    {
      connec++;
    }
  }

  if (connec > 1)
  {
    cout << "Not Possible" << endl;
  }
  else
  {
    cout << edge_added << " ";
    cout << totalcost << endl;
  }

  return 0;
}
