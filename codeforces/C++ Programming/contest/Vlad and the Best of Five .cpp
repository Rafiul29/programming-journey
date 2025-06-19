// https://codeforces.com/contest/1926/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        a=b=0;
        string str;
        cin>>str;
        for(char ch:str){
            if(ch=='A'){
                a++;
            }
            if(ch=='B'){
                b++;
            }
        }
        
        if(a>b){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
    
    
    
    return 0;
}