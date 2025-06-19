// Problem Statement

// You will be given a positive integer
// . You will start from

// and do some steps (possibly zero).

// In each step you can choose one of the following:

//     Add 

// with the current value
// Multiply by

//     with the current value

// Can you tell if you can reach

// by using any number of steps you want.

// Input Format

//     First line will contain 

// , the number of test cases.
// In each test case you will be given

//     .

// Constraints

// Output Format

//     Print "YES" if you can reach 

//     , "NO" otherwise.

// Sample Input 0

// 5
// 1
// 3
// 5
// 15
// 16

// Sample Output 0

// YES
// NO
// YES
// NO
// YES

// Submissions: 71

// Max Score:

// 20

// Difficulty:

// Easy

// Rate This Challenge:
// More

#include <bits/stdc++.h>
using namespace std;

int dp[100005];

bool Make_It(int start ,int n){
    if(start>n){
        return false;
    }
     if(start==n){
        return true;
     }
     if(dp[start]!=-1){
         return dp[start];
     }
    return dp[start]=Make_It(start*2,n) || Make_It(start+3,n);
}

int main()
{
  int t;
  cin>>t;
  while(t--){
      memset(dp,-1,sizeof(dp));
      int n;
      cin>>n;
      if(Make_It(1,n)){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
  }
  
 return 0; 
}  