// 7 8
// 5 6
// 4 5
// 0 4
// 0 6
// 1 0
// 1 2
// 2 3
// 3 1


#include <bits/stdc++.h>
using namespace std;
const int N=10e5+5;
bool vis[N];
vector<int> adj[N];
bool pathVisit[N];
bool ans;

void dfs(int parent){
    vis[parent]=true;
    pathVisit[parent]=true;
    // cout<<parent<<endl;
    for(int child:adj[parent]){
      
      if(pathVisit[child]){
          ans=true;
      }
        if(vis[child]==false){
        
            dfs(child);
            
        }
    }
    pathVisit[parent]=false;
}

int main() {
    
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));
    memset(pathVisit,false,sizeof(pathVisit));
    ans=false;
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ans){
        cout<<"Cycle found";
    }else{
        cout<<"Cycle not found";
    }
	return 0;
}
