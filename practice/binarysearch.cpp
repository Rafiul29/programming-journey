#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  int array[N];
  for (int i = 0; i < N; i++)
  {
    cin >> array[i];
  }

  sort(array, array + N); // nlogn

  for (int i = 0; i < Q; i++)
  {
    int X;
    cin >> X;
    int flag = 0;

    int low = 0, high = N - 1;

    while (low <= high)
    {
      int mid = (low + high) / 2;
      if (array[mid] == X)
      {
        flag = 1;
        break;
      }
      else if (array[mid] > X)
      {
        high = mid - 1;
      }
      else if (array[mid] < X)
      {
        low = mid + 1;
      }
    }
    if (flag)
    {
      cout << "found" << endl;
    }
    else
    {
      cout << "not found" << endl;
    }
  }

  return 0;
}