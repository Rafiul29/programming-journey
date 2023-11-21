
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    string sub="hello";
    int j=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==sub[j]){
            j++;
        }
    }
     if(j==sub.size()){
         cout<<"YES";
     }else{
         cout<<"NO";
     }
     return 0;   
}