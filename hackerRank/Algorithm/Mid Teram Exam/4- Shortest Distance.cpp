// Problem Statement

// You'll be given a graph of
// nodes and edges. For each edge, you'll be given , and which means there is an edge from to only and which will cost

// .

// Also, you'll be given
// queries, for each query you'll be given and , where is the source and is the destination. You need to print the minimum cost from to for each query. If there is no connection between and , print

// .

// Note: There can be multiple edges from one node to another. Make sure you handle this one.

// Input Format

//     First line will contain

// and
// .
// Next
// lines will contain , and
// .
// After that you'll get
// .
// Next
// queries will contain and

//     .

// Constraints

// Output Format

//     Output the minimum cost for each query.

// Sample Input 0

// 4 7
// 1 2 10
// 2 3 5
// 3 4 2
// 4 2 3
// 3 1 7
// 2 1 1
// 1 4 4
// 6
// 1 2
// 4 1
// 3 1
// 1 4
// 2 4
// 4 2

// Sample Output 0

// 7
// 4
// 6
// 4
// 5
// 3

// Sample Input 1

// 4 4
// 1 2 4
// 2 3 4
// 3 1 2
// 1 2 10
// 6
// 1 2
// 2 1
// 1 3
// 3 1
// 2 3
// 3 2

// Sample Output 1

// 4
// 6
// 8
// 2
// 4
// 6


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

  ll n, e;
  cin >> n >> e;
  ll adj[n + 1][n + 1];

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < n + 1; j++)
    {
      adj[i][j] = 1e18;
      if (i == j)
        adj[i][j] = 0;
        }
  } 
    while (e--)
    {
      int a, b, c;
      cin >> a >> b >> c;
      if(adj[a][b]>c){
          adj[a][b] = c;
      }
      
    }
    
    for(int k=0;k<n+1;k++){
      for(int i=0;i<n+1;i++){
         for(int j=0;j<n+1;j++){
            if(adj[i][k]+adj[k][j]<adj[i][j]){
                adj[i][j]=adj[i][k]+adj[k][j];
            }
           }
        }
    }
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(adj[x][y]==1e18){
            cout<<"-1"<<endl;
        }else{
             cout<<adj[x][y]<<endl;
        }
       
    }
    return 0;
    
}
