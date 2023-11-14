#include <limits.h>
#include <stdio.h>

int Max_Number(int arr[], int n, int i) {

  if (i == n - 1) {
    return arr[i];
  }

  int max = Max_Number(arr, n, i + 1);
  if (max < arr[i]) {
    return arr[i];
  } else {
    return max;
  }
}

int main() {

  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int max = Max_Number(arr, n, 0);
  printf("%d", max);
  return 0;
}