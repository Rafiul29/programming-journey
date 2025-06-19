// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int a,b;
   char s;
   cin>>a>>s>>b;
   int ascii=s;
   if(ascii==62){
      if(a>b){
        cout<<"Right";
      }else{
        cout<<"Wrong";
      }
   }
  else if(ascii==61){
    if(a==b){
      cout<<"Right";
    }else{
      cout<<"Wrong";
    }
  }
  else if(ascii==60){
    if(a<b){
      cout<<"Right";
    }else{
      cout<<"Wrong";
    }
  }
    return 0;
}