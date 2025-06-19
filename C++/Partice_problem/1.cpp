// Question: At first in the main function take an integer N as input. Then make a function named get_array() which will receive that N as a parameter. Then inside the get_array() function create an integer array of size N. Then the values of that array will be taken as input. After that return that array from that function and receive it in the main function and print the values of the array there.



// Sample Input
// Sample Output
// 5
// 1 2 3 4 5
// 1 2 3 4 5
// 7
// 5 1 2 4 6 9 3
// 5 1 2 4 6 9 3


// Online C++ compiler to run C++ progra
#include <bits/stdc++.h>
using namespace std;

int* get_array(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    return a;
}

int main() {

 int n;
 cin>>n;
 
 int *a=get_array(n);
 
   for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
  return 0;
}

