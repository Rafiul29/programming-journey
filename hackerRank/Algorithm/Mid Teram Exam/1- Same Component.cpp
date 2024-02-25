// Problem Statement

// You will be given a 2D matrix of size
// which will contain only dot() and minus() where dot() means you can go in that cell and minus(

// ) means you can't.

// You can move in only 4 directions (Up, Down, Left and Right).

// You will be given the indexes of two cells -
// (,) and (,). You need to tell if these and cells are in the same component or not. Same component means you can go from to

// .

// Input Format

//     First line will contain 

// and
// .
// Next you will be given the 2D matrix.
// Next line will contain
// and
// .
// Last line will contain
// and

//     .

// Constraints

// Output Format

//     Output "YES" if those cell are in the same component, "NO" otherwise.

// Sample Input 0

// 5 4
// ..-.
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2

// Sample Output 0

// NO

// Sample Input 1

// 5 4
// ....
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2

// Sample Output 1

// YES

// Submissions: 113

// Max Score:

// 20

// Difficulty:

// Easy

// Rate This Challenge:
// More
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
            if (s[j] == '-')
                mat[i][j] = -1;
        }
    }
    
    memset(vis,false,sizeof(vis));
    
    int s1,d1,s2,d2;
    cin>>s1>>s2;
    cin>>d1>>d2;
    
    dfs(s1,s2);
    if(vis[d1][d2] == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
