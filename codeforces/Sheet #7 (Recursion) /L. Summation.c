#include <limits.h>
#include <stdio.h>

long long int summation(long long int arr[], int n, int i) {
  if (n  == i)
    return 0;
  return arr[i] + summation(arr, n, i + 1);
}

int main() {
  int n;
  scanf("%d", &n);
  long long int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  long long int res = summation(arr, n, 0);
  printf("%lld", res);
  return 0;
}