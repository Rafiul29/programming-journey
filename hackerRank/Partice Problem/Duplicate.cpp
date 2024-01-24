// Problem Statement

// You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

// Input Format

//     First line will contain N.
//     Second line will contain the array A.

// Constraints

//     1 <= N <= 100000
//     0 <= A[i] <= 10^9; Where 0 <= i < N

// Output Format

//     Output "YES" or "NO" without the quotation marks according to the problem statement.

// Sample Input 0

// 5
// 1 2 3 4 5

// Sample Output 0

// NO

// Sample Input 1

// 6
// 2 1 3 5 2 1 

// Sample Output 1

// YES


#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector <int> arr;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }
   
   sort(arr.begin(),arr.end());
   
   bool flag=false;
   
   for(int i=0;i<arr.size()-1;i++){
     if(arr[i]==arr[i+1]){
         flag=true;
         break;
     }
   }

    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}