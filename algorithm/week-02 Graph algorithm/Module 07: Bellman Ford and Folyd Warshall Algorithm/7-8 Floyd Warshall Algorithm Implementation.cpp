#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

  ll n, e;
  cin >> n >> e;
  ll adj[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      adj[i][j]=INT_MAX;
      if(i==j) adj[i][j]=0;
    }
}
  while (e--)
  {
   int a,b,c;
   cin>>a>>b>>c;
   adj[a][b]=c;
  }
  
  
   for(int k=0;k<n;k++){
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(adj[i][k]+adj[k][j]<adj[i][j]){
                adj[i][j]=adj[i][k]+adj[k][j];
                // cout<<i<<" "<<k<<" "<<j<<endl;
            }
           }
        }
    }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(adj[i][j]==INT_MAX)  cout<<"INF"<<" ";
       else  cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}

  return 0;
}


// 4 6
// 3 2 8
// 2 1 5
// 1 0 2
// 3 0 20
// 0 1 3
// 1 2 2