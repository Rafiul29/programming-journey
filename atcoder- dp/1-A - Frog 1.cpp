// https://atcoder.jp/contests/dp/tasks/dp_a




#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int height[N];
int dp[N];
int frog_jump(int i){
     
     if(i==0) return 0;
     
     if(dp[i]!=-1) return dp[i];
     
     int cost=INT_MAX;
    //  one
     cost =min(cost,frog_jump(i-1)+abs(height[i]-height[i-1]));
     //two
     if(i>1) cost =min(cost,frog_jump(i-2)+abs(height[i]-height[i-2]));
     return dp[i]=cost;
}

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
   memset(dp,-1,sizeof(dp));
   cout<<frog_jump(n-1);
  return 0;
}