#include <bits/stdc++.h>
using namespace std;


int main()
{   
    map<string,int> mp;
    // mp.insert({"rafi",1});
    // mp.insert({"asfia",2});
    mp["rafi"]=12;
    mp["asfia"]=1212;
    // for(auto it=mp.begin(); it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    
    if(mp.count("asfia")){
        cout<<"yes";
    }else{
        cout<<"NO";
    }
  return 0;
}