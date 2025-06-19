#include <limits.h>
#include <stdio.h>

void printEvenIndex(long long int arr[], int n, int i) {
  if (n == i)
    return;
  printEvenIndex(arr, n, i + 1);
  if (i % 2 == 0)
    printf("%lld ", arr[i]);
}

int main() {
  int n;
  scanf("%d", &n);
  long long int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  printEvenIndex(arr, n, 0);

  return 0;
}