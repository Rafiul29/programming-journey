#include <stdio.h>
#include <string.h>


// parameter (*arr)
void fun(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    printf("%d\n", arr[i]);
  }
}

int main()
{

  int arr[4] = {1, 2, 3, 4};

  fun(arr, 4);

  return 0;
}
