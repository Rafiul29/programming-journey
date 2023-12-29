// Problem Statement

// You are given a binary string
// of size . In one operation, you can remove and if is equal to and is equal to for each and . You need to perform this operation until no further operations can be done. Each operation must be performed on the new string. You need to find the maximum number of continuous

// in the final string.

// Input Format

//     First line will contain 

// , the number of test cases.
// Each line of the test case will contain the string

//     .

// Constraints

//     . Here || means the length of the string.

// Output Format

//     Output the maximum number of continuous 0's.

// Sample Input 0

// 5
// 01111001010111100110
// 01101110
// 1110000111
// 11
// 000

// Sample Output 0

// 4
// 2
// 4
// 0
// 3

// Explanation 0

// In the first test case, the final string will look like 0001010000 where the number of continuous 0's are 3,1 and 4. So, the answer is 4 which is maximum.

// Submissions: 77

// Max Score:

// 1

// Rate This Challenge:
// More

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
      stack<char> st;
      string s;
      cin>>s;
      for(int i=0;i<s.size();i++){
          if(s[i]=='0'){
              st.push(s[i]);
          }else if(!st.empty() && st.top()=='1' && s[i]=='1'){
              st.pop();
          }else{
              st.push(s[i]);
          }
      }
      int cnt=0;
      int mx=0;
      while(!st.empty()){
          if(st.top()=='0'){
              cnt++;
          }
            mx=max(mx,cnt);
          if(st.top()=='1'){
            
              cnt=0;
          }
          st.pop();
      }
      cout<<mx<<endl;
  }
}
