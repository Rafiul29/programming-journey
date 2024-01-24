#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> arr1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<arr1.size();i++){
    //    if(find(arr1.begin(), arr1.end(), arr1[i] + 1)!=arr1.end() ) cnt++;
    
        auto a=find(arr1.begin(), arr1.end(), arr1[i] + 1);
        if(a!=arr1.end()){
            cnt++;
        }
    }
   cout<<cnt;
    return 0;
}