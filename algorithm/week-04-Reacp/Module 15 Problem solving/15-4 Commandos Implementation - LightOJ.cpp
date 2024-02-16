
#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> v[N];
int dis_from_src[N];
int dis_from_dsc[N];
bool vis[N];

void bfs(int s,int track){
    queue<int> q;
    q.push(s);
    if(track==0){
        dis_from_src[s]=0;
    }else{
        dis_from_dsc[s]=0;
    }
    vis[s]=true;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
                if(track==0){
                    dis_from_src[child]=dis_from_src[par]+1;
                }else{
                     dis_from_dsc[child]=dis_from_dsc[par]+1;
                }
                
            }
        }
    }
}

int main()
{


  int t;
  cin >> t;
     int cs=1;
  while (t--)
  {
      int n,e;
      cin>>n>>e;
   
      while(e--){
          int a,b;
          cin>>a>>b;
          v[a].push_back(b);
          v[b].push_back(a);
      }
      int s,d;
      cin>>s>>d;
      
      memset(vis,false,sizeof(vis));
      memset(dis_from_src,-1,sizeof(dis_from_src));
      bfs(s,0);
      
      memset(vis,false,sizeof(vis));
      memset(dis_from_dsc,-1,sizeof(dis_from_dsc));
      bfs(d,1);
       int ans=INT_MIN;
       for(int i=0;i<n;i++){
           int val=dis_from_src[i]+dis_from_dsc[i];
           ans=max(ans,val);
       }
       cout<<"Case "<< cs++ <<": "<<ans<<endl;
       for(int i=0;i<n;i++){
           v[i].clear();
       }
   }
   
  return 0;
}