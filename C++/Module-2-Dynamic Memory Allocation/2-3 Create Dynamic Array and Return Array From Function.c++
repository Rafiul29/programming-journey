#include <bits/stdc++.h>
using namespace std;

int *func() {
  int *a = new int;
  cout<< "fun "<< a <<endl;
  *a = 100;
  return a;
}

int main() {
  
  int n;
  cin>>n;
  // dynamic array 
int *arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }

  return 0;
}


// retun array from function
#include <bits/stdc++.h>
using namespace std;

int *func() {
  int *a=new int[5];
  for(int i=0;i<5;i++){
    cin>>a[i];
  }
  return a;
}

int main() {

  int *a = func();

  for (int i = 0; i <5; i++) {
    cout << a[i] << endl;
  }

  return 0;
}