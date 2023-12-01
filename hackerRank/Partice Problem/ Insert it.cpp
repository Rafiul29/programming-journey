// Problem Statement

// You will given an integer array A of size N and another array B of size M. Also you will be given an index X. You need to insert the whole array B to the index X of array A.

// Input Format

//     First line will contain N.
//     Second line will contain array A.
//     Third line will contain M.
//     Fourth line will contain array B.
//     The last line will contain X.

// Constraints

//     1 <= N, M <= 10^3
//     1 <= A[i], B[j] <= 10^3; Where 0 <= i < N and 0 <= j < M
//     0 <= X <= N

// Output Format

//     Output the final array A.

// Sample Input 0

// 5
// 2 3 4 5 6
// 3
// 10 20 30
// 3

// Sample Output 0

// 2 3 4 10 20 30 5 6 

// Sample Input 1

// 5
// 2 3 4 5 6
// 3
// 10 20 30
// 0

// Sample Output 1

// 10 20 30 2 3 4 5 6 

// Sample Input 2

// 4
// 3 4 5 6
// 3
// 10 20 30
// 4

// Sample Output 2

// 3 4 5 6 10 20 30 


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   cin>>n;
   vector <int> arr;
   vector <int> arr1;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }
   
  cin>>n;
for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr1.push_back(x);
   }
   int x;
   cin>>x;
   
  arr.insert(arr.begin()+x,arr1.begin(),arr1.end());
   
for(int i=0;i<arr.size();i++){
   cout<<arr[i]<<" ";
   }

    return 0;
}