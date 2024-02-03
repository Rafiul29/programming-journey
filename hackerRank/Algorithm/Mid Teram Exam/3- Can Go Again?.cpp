// Problem Statement

// You will be given
// numbers of nodes, numbers of edges in a graph. For each edge you will be given , and which means there is a connection from to only and for which you need to give cost. The value of nodes could be from to

// .

// You will be given a source node
// . Then you will be given a test case , for each test case you will be given a destination node . You need to tell the minimum cost from source node to destination. If there is no possible path from to

// then print Not Possible.

// Note: If there is a negative weight cycle in the graph, then no answer would be correct. So print one line only - "Negative Cycle Detected".

// Input Format

//     First line will contain

// and
// .
// Next
// lines will contain , and
// .
// Next line will contain source node
// .
// Next line will contain
// , the number of test cases.
// For each test case, you will get

//     .

// Constraints

// Output Format

//     Output the minimum cost for each test case.

// Sample Input 0

// 5 7
// 1 2 10
// 1 3 -2
// 3 2 1
// 2 4 7
// 3 4 -3
// 4 5 5
// 2 5 2
// 1
// 5
// 1
// 2
// 3
// 4
// 5

// Sample Output 0

// 0
// -1
// -2
// -5
// 0

// Sample Input 1

// 5 7
// 1 2 10
// 1 3 -2
// 3 2 1
// 2 4 7
// 3 4 -3
// 4 5 5
// 2 5 2
// 5
// 5
// 1
// 2
// 3
// 4
// 5

// Sample Output 1

// Not Possible
// Not Possible
// Not Possible
// Not Possible
// 0

// Sample Input 2

// 5 8
// 1 2 -2
// 1 3 -10
// 3 2 1
// 2 4 7
// 4 3 -3
// 4 5 5
// 2 5 2
// 4 1 1
// 1
// 5
// 1
// 2
// 3
// 4
// 5

// Sample Output 2

// Negative Cycle Detected
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Edge{
  public:
  ll u,v,c;  
  Edge(ll u,ll v,ll c){
      this->u=u;
      this->v=v;
      this->c=c;
  }
};
const ll N=1e3+5;
ll dis[N];

int main() {
    
    ll n,e;
    cin>>n>>e;
    vector<Edge> EdgeList;
    while(e--){
        ll u,v,c;
        cin>>u>>v>>c;
        EdgeList.push_back(Edge(u,v,c));
    }
    
    for(ll i=0;i<=n;i++){
        dis[i]=LLONG_MAX;
    }
    ll s;
    cin>>s;
    dis[s]=0;
    
    for(ll i = 1; i <= n - 1; i++) {
    for (Edge ed : EdgeList) {
        ll u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < LLONG_MAX && dis[u] + c < dis[v]) {
            dis[v] = dis[u] + c;
        }
    }
}
    
    bool cycle = false;
    for (Edge ed : EdgeList) {
    ll u, v, c;
    u = ed.u;
    v = ed.v;
    c = ed.c;
    if (dis[u] < LLONG_MAX && dis[u] + c < dis[v]) {
        cycle = true;
        break;
    }
}


  if (cycle)
  {
    cout << "Negative Cycle Detected";
  }
  
  if(!cycle){
      ll t;
   cin>>t;
   while(t--){
    ll d;
    cin>>d;
        if(dis[d]==LLONG_MAX){
            cout<<"Not Possible"<<endl;
        }else{
             cout<<dis[d]<<endl;
        }
   }
  }
    return 0;
}
