// Error code
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
//  "010" or "101"
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
   int flag=0;
    for(int i=0;i<str.size()-2;i++){
        if((str[i]=='0' and str[i+1]=='1' and str[i+2]=='0') or (str[i]='1' and str[i+1]=='0' and str[i+2]=='1')){
            flag=1;
            break;
        }
    }
    
    if(flag==1){
        cout<<"Good"<<endl;
    }else{
        cout<<"Bad"<<endl;
    }
}
}