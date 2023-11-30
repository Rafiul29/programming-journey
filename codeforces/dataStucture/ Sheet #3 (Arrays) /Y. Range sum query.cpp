#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,q;
   cin>>n>>q;
   vector <long long int> arr;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }
   
    for(int i=1;i<n;i++){
       
      arr[i]=arr[i]+arr[i-1];
   }

   while(q--){
       int l,r;
       cin>>l>>r;
       l--;
       r--;
      long long int sum=0;
        if(l==0){
            sum=arr[r];
        }else{
           sum=arr[r]-arr[l-1];
        }
        cout<<sum<<endl;
   }
    return 0;
}