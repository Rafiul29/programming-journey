Question : Take an integer array A of size N as input.Then take an integer M as input.You need to take an array B of size M and copy all elements of array A to array B.Delete the array A and then take input of the rest of the elements of array B.After that print array B.

           Sample Input
               Sample Output 5 1 2 3 4 5 10 6 7 8 9 10
           // output
           1 2 3 4 5 6 7 8 9 10
           // input
           3 10 20 10 5 60 40
           // output
           10 20 10 60 40

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int *a = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int m;
  cin >> m;
  int *b = new int[m];
  for (int i = 0; i < n; i++)
  {
    b[i] = a[i];
  }

  delete[] a;

  for (int i = n; i < m; i++)
  {
    cin >> b[i];
  }

  for (int i = 0; i < m; i++)
  {
    cout << b[i] << " ";
  }

  return 0;
}
