#include <bits/stdc++.h>
using namespace std;


int main()
{   
 set<int> s;
 int n;
 cin>>n;
 while(n--){
     int x;
     cin>>x;
     s.insert(x); //Ologn
 }
 if(s.count(10)){
     cout<<"yes"<<endl;
 }else{
     cout<<"No"<<endl;
 }
 for(auto it=s.begin();it!=s.end();it++){
     cout<<*it<<endl;
 }
  return 0;
}