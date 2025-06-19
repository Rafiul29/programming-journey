#include <stdio.h>

long long int suffi_sum(int n, int m, int arr[]) {
  if (m == 0)
    return 0;
  return arr[n - 1] + suffi_sum(n - 1, m - 1, arr);
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
long long  int ans = suffi_sum(n, m, arr);
  printf("%lld", ans);
  return 0;
}
