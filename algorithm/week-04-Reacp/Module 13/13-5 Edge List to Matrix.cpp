#include <bits/stdc++.h>
using namespace std;

void convert(int n,vector<pair<int,int>> adj[]){
    int mat[n][n];
    memset(mat,-1,sizeof(mat));
    
    for(int i=0;i<n;i++){
        for(pair<int,int> child:adj[i]){
            int childNode=child.first;
            int cost =child.second;
            
            
            mat[i][i]=0;
            mat[i][childNode]=cost;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
   int n,e;
   cin>>n>>e;
   int mat[n][n];
   memset(mat,-1,sizeof(mat));
   while(e--){
       int a,b,c;
       cin>>a>>b>>c;
        mat[e][e]=0;
      mat[a][b]=c;
      mat[b][a]=c;
   }
  
//   convert(n,v);

  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}