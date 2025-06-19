#include<bits/stdc++.h>
using namespace std;
// input without space
int main()
{
    int n;
    cin>>n;
    vector<string> v;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<endl;
    // }
    
    for(string ch:v){
        cout<<ch<<endl;
    }
    return 0;
}





// with space
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v;
    
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<endl;
    // }
    
    for(string ch:v){
        cout<<ch<<endl;
    }
    return 0;
}
