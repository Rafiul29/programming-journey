#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> arr1;
    vector <int> arr2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    
   arr2.insert(arr2.end(),arr1.begin(),arr1.end());
  
    //  for(int i=0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    
    for(int i=0;i<arr2.size();i++){
        if(i==arr2.size()-1){
            cout<<arr2[i];
        }else{
            cout<<arr2[i]<<" ";
        }
    }
    return 0;
}