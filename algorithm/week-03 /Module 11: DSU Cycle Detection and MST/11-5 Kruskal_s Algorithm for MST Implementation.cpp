#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int par[N];
int group_size[N];
int level[N];
void dsu_inititalize(int n){
    for(int i=0;i<n;i++){
        par[i]=-1;
        group_size[i]=1;
        level[i]=0;
    }  
}

int dsu_find(int node){
    if(par[node]==-1) return node;
    int leader= dsu_find(par[node]);
    par[node]=leader;
    return leader;
}
 
void dsu_union_by_size(int node1,int node2){
     int leaderA=dsu_find(node1);
     int leaderB=dsu_find(node2);
    if(group_size[leaderA]>group_size[leaderB]){
        par[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }else{
         par[leaderA]=leaderB;
         group_size[leaderB]++;
    }
}

class Edge{
    public:
      int u,v,w;
      Edge(int u,int v,int w){
          this->u=u;
          this->v=v;
          this->w=w;
      }
};

bool cmp(Edge a,Edge b){
    return a.w<b.w;
}

int main() {
   
   int n,e;
   cin>>n>>e;
   dsu_inititalize(n);
   vector<Edge> edgeList;
   while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    edgeList.push_back(Edge(u,v,w));
   }
    
    sort(edgeList.begin(),edgeList.end(),cmp);
    
    int totalcost=0;
    
    for(Edge ed:edgeList){
       int leaderU=dsu_find(ed.u);
       int leaderV=dsu_find(ed.v);
       if(leaderU==leaderV){
           continue;
       }else{
           dsu_union_by_size(ed.u,ed.v);
           totalcost+=ed.w;
       }
    }
    cout<<totalcost<<endl;
    
    
    return 0;
}

// 5 7
// 1 2 7
// 0 1 2 
// 0 2 3
// 0 3 3
// 2 4 4
// 1 4 5
// 3 4 6

