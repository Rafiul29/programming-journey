
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    getchar();
    string str;
    getline(cin,str);
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]){
            cnt++;
        }
    }
    
    cout<<str.size()-cnt;
     return 0;   
}