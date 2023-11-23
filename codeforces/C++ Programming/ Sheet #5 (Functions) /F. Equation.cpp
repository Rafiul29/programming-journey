#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
   int x,n;
   cin>>x>>n;
   int long long res=0;
   for(int i=2;i<=n;i+=2){
      res+=pow(x,i);
   }
   cout<<res;
    return 0;
}