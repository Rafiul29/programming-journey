class Solution {
public:
  bool vis[301][301];
  int n,m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
  bool isValid(int ci,int cj){
        if(ci>=0 && ci<n && cj>=0 && cj<m) return true;
        else return false;
    }

  void dfs(int si,int sj,vector<vector<char>>& grid){
        vis[si][sj]=true;
        
        for(int i=0;i<4;i++){
            int ci=si+d[i].first;
            int cj=sj+d[i].second;
            if(isValid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='1'){
                dfs(ci,cj,grid);
            }
        }
  }


    int numIslands(vector<vector<char>>& grid) {
       int ans=0;
        n=grid.size();
        m=grid[0].size();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,grid);
                     ans++;
                   
                }
            }
        }
        return ans;
    }
};