#include <limits.h>
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  if (n <= 1)
    return;
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == min) {
      cnt++;
    }
  }
  
  if (cnt % 2 != 0) {
    printf("Lucky\n");
  } else {
    printf("Unlucky\n");
  }
  
  return 0;
}
