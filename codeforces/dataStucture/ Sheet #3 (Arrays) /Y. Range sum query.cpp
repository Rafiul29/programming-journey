#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,q;
   cin>>n>>q;
   vector <int> arr;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }
   
   while(q--){
       int l,r;
       cin>>l>>r;
       int sum=0;
       for(int i=l-1;i<r;i++){
           sum+=arr[i];
       }
    cout<<sum<<endl;
   }
    return 0;
}