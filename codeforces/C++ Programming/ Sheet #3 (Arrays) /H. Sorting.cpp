// Online C++ compiler to run C++ progra
#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
          swap(arr[i],arr[j]);
      }
  }
}

  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      cout << arr[i];
    } else {
      cout << arr[i] << " ";
    }
  }
  return 0;
}





#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);

     for(int i=0;i<n;i++){
      if (i == n - 1) {
      cout << arr[i];
    } else {
      cout << arr[i] << " ";
    }
    }

    return 0;
}