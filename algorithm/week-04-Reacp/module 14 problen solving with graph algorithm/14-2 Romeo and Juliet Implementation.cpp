// Problem Statement

// Romeo and Juliet are a newly married couple. They went to Switzerland for their honeymoon. They had a plan in mind: they would test their fortune by staying in different cities and seeing if they could reunite in at most
// steps. Switzerland has cities numbered from to , with

// two-way roads connecting them.

// Romeo is in city
// , and Juliet is in city

// . In each step, they can cross one road and move from one city to another. It is not mandatory for both of them to cross; one can choose to stay in the same city if desired. However, the step will still be counted.

// Can you tell if they can be reunited or not?

// Input Format

//     First line will contain 

// and
// ; The number of city and number of roads respectively.
// Next
// lines will contain and which means there is a road between city and
// .
// Last line will contain
// , and

//     .

// Constraints

// and !=

// Output Format

//     Output "YES" if they can be reunited otherwise output "NO".

// Sample Input 0

// 8 9
// 0 1
// 4 0
// 4 2
// 2 3
// 1 3
// 2 5
// 5 6
// 6 7
// 6 3
// 4 7 2

// Sample Output 0

// YES

// Explanation 0

//     Initial city of Romeo and Juliet are 4 and 7.

// image

//     Romeo at city 2 and Juliet at city 6 after step 1 -

// image

//     Romeo and Juliet are both at city 5 after step 2 -

// image

// Sample Input 1

// 8 9
// 0 1
// 4 0
// 4 2
// 2 3
// 1 3
// 2 5
// 5 6
// 6 7
// 6 3
// 2 7 2

// Sample Output 1

// YES

// Sample Input 2

// 8 9
// 0 1
// 4 0
// 4 2
// 2 3
// 1 3
// 2 5
// 5 6
// 6 7
// 6 3
// 2 7 1

// Sample Output 2

// NO

// Sample Input 3

// 7 6
// 4 0
// 0 1
// 3 1
// 3 2
// 4 2
// 5 6
// 4 6 10

// Sample Output 3

// NO



#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
bool vis[N];
int dis[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=true;
    dis[s]=0;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:v[par]){
            if(!vis[child]){
                vis[child]=true;
                dis[child]=dis[par]+1;
                 q.push(child);
            }
        }
    }
}

int main() {
    
    int n,e;
    cin>>n>>e;
    
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        
    }
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    int src,d,k;
    cin>>src>>d>>k;
    bfs(src);

    
    if(dis[d]!=-1 && dis[d]<=k*2){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
  
    return 0;
}