// Problem Statement

// Once upon a time, there was a treasure hunter who ventured into an ancient temple in search of a valuable artifact. The temple was filled with traps and obstacles, and the treasure hunter had to carry all of his equipment with him.

// The treasure hunter had a backpack with a limited weight capacity, and he could only carry a certain amount of equipment with him. Each piece of equipment had its own weight and value, and the treasure hunter needed to choose which items to bring to maximize the total value while keeping the total weight under the limit.

// Help the treasure hunter to choose which items to bring in his backpack to maximize their total value while keeping the total weight of his backpack under a certain limit. Each item can only be included once.

// Input Format

//     First line will contain 

// , the number of test cases.
// The first line of each test case will contain
// (Number of items) and
// (Total weight of backpack).
// Second line of each test case will contain an array
// containing the weights of all items.
// Third line of each test case will contain an array

//     containting the values of all items.

// Constraints

// ; Here ; Here

// Output Format

//     Output the maximum total value you can obtain in the backpack for each test case.

// Sample Input 0

// 2
// 4 7
// 2 3 4 5
// 4 7 6 5
// 4 17
// 10 1 6 9
// 6 10 10 8

// Sample Output 0

// 13
// 28

// Explanation 0

// In the first test case case, he can take 2nd and 3rd item which total weight is 3+4=7 and total value is 7+6=13 and its the maximum value possible.

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e3+5;
const int maxW = 1e3+5;
int dp[maxN][maxW];

int kanpsack(int n, int weight[], int value[], int W)
{
  if (n < 0 || W == 0)
  {
    return 0;
  }
  if (dp[n][W] != -1)
  {
    return dp[n][W];
  }
  if (weight[n] <= W)
  {
    int op1 = kanpsack(n - 1, weight, value, W - weight[n]) + value[n];
    int op2 = kanpsack(n - 1, weight, value, W);
    return dp[n][W] = max(op1, op2);
  }
  else
  {
    int op2 = kanpsack(n - 1, weight, value, W);
    return dp[n][W] = op2;
  }
}
int main()
{

  int t;
  cin>>t;
  while(t--){
      int n, W;
  cin >> n >> W;
  int weight[n], value[n];

  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> value[i];
  }
  for (int i = 0; i < maxN; i++)
  {
    for (int j = 0; j < maxW; j++)
    {
      dp[i][j] = -1;
    }
  }

  cout << kanpsack(n - 1, weight, value, W) << endl;
  }
  return 0;
}