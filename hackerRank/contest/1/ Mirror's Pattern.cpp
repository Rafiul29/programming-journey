// Problem Statement

// Mirror likes to draw patterns in his notebook. Now, Mirror is learning programming and wants to recreate some of those patterns using code. However, as a new learner, Mirror is unable to create all the patterns from his notebook. So, today, Mirror needs your help to generate just one pattern based on his input.

// You need to write a program that will take an integer number and create Mirror's pattern for the corresponding input.

// For example,

//     If 

//     , the mirror's pattern look like this,

// image

//     If 

//     , the mirror's pattern look like this,

// image

// Input Format

//     You will be given a positive integer 

//     as input.

// Constraints

// Output Format

//     Output the pattern

// Sample Input 0

// 5

// Sample Output 0

// 12345
// 2   4
// 3   3
// 4   2
// 54321

// Sample Input 1

// 1

// Sample Output 1

// 1

// Sample Input 2

// 2

// Sample Output 2

// 12
// 21


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
      if (i == 1)
      {
        for (int k = 1; k <= n; k++){
            cout<<k;
        }
      } 
      else if (i == n)
      {
       for (int k = n; k >=1; k--){
            cout<<k;
        }
      }else{
          for (int k = 1; k <= n; k++){
            if(k==1){
              cout<<i;
            }else if(k==n){
            cout<<n-i+1;
            }else{
                cout<<" ";
            }
        }
      }
     cout<<endl;
  }
}
