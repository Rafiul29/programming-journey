// Problem Statement

// You are given an
// sized 2D matrix that represents a map of a building. Each cell represents a wall, a floor or a room. You will be given two rooms and . You need to tell if you can go from room to

// by passing through the floors. You can walk left, right, up, and down through the floor cells. You can't pass through walls.

// Input Format

//     The first input line has two integers 

// and
// : the height and width of the map.
// Then there are
// lines of

//     characters describing the map. Each character is .(floor), #(wall), A or B (rooms).

// Constraints

// Output Format

//     Output YES if you can go from room 

// to

//     , NO otherwise.

// Sample Input 0

// 5 8
// ########
// #.A#...#
// #.##.#B#
// #......#
// ########

// Sample Output 0

// YES


#include <bits/stdc++.h>
using namespace std;
const int N = 20;

int n, m;
int mat[N][N];
int visited[N][N];

int dx[4] ={0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

bool isValidate(int x, int y){
    return !visited[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(pair<int, int> src){
    queue<pair<int, int>> q;

    q.push(src);
    visited[src.first][src.second] = true;

    while(!q.empty()){
        auto parent = q.front();
        q.pop();
        int x = parent.first;
        int y = parent.second;

        for(int i = 0; i < 4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if(isValidate(new_x, new_y))
            {
                q.push({new_x, new_y});
                visited[new_x][new_y] = true;
            }
        }
    }
}

int main()
{
    
    pair<int, int> src, dst;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
            if(s[j] == 'A') src = {i, j};
            if(s[j] == 'B') dst = {i, j};
        }
    }
    bfs(src);

    if(visited[dst.first][dst.second] == true) cout << "YES" << endl;
    else cout << "NO" << endl;
}






#include <bits/stdc++.h>
using namespace std;
const int N=1005;
int mat[N][N];
bool vis[N][N];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};

int n,m;
bool isvalid(int i,int j){
  return !vis[i][j] && mat[i][j] != -1 && i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int si,int sj){
    vis[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(isvalid(ci,cj)){
            dfs(ci,cj);
        }
    }    
}

int main() {
  
  pair<int, int> src, dst;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
            if(s[j] == 'A') src = {i, j};
            if(s[j] == 'B') dst = {i, j};
        }
    }
    
    memset(vis,false,sizeof(vis));
    dfs(src.first,src.second);
    if(vis[dst.first][dst.second] == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
