
#include <bits/stdc++.h>
using namespace std;
const int N=10e5+5;
bool vis[N];
vector<int> adj[N];
int parArr[N];
bool ans;

void dfs(int parent){
    vis[parent]=true;
    // cout<<parent<<endl;
    for(int child:adj[parent]){
        
        if(vis[child]==true && parArr[parent]!=child){
            ans=true;
        }
        if(vis[child]==false){
            parArr[child]=parent;
            dfs(child);
            
        }
    }
}

int main() {
    
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parArr,-1,sizeof(parArr));
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
