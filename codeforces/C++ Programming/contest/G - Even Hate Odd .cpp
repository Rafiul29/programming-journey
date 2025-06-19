#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       if(n%2==1){
        cout<<-1<<endl;
        break;
       }
        int arr[n];
      
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        
        int odd=0,even=0;
        
        for(int i=0;i<n;i++){
          if(arr[i]%2==0){
              even++;
          }
          if(arr[i]%2==1){
              odd++;
          }
        }
        
       if(odd==even){
           cout<<0<<endl;
       }else{
           cout<<abs((n/2)-odd)<<endl;
       }
        
    }
  
    return 0;
}