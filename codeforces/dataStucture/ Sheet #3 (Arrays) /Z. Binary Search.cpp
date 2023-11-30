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
       int p;
       cin>>p;
    
          auto it=find(arr.begin(),arr.end(),p);
          if(it!=arr.end()){
              cout<<"found"<<endl;
          }else{
                cout<<"not found"<<endl;
          }
      }

    return 0;
}