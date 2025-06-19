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

reverse(arr1.begin(),arr1.end());

    for(int i=0;i<arr1.size();i++){
        if(i==arr1.size()-1){
            cout<<arr1[i];
        }else{
            cout<<arr1[i]<<" ";
        }
    }
    return 0;
}