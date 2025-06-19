#include<bits/stdc++.h>
using namespace std;

// selection sort
int main()
{
    int n;
    cin>>n;
  for(int i=0;i<=n;i++){ //O(n)
      int x=i;
     while(x>0){ //O(log(N))
         int digit=x%10;
         cout<<digit<<" ";
         x/=10;
     }
     cout<<endl;
  }
    return 0;
}

// time complexity O(N*log(N))