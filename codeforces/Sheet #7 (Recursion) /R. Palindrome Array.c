#include <stdio.h>

int palindrome_array(int arr[], int n, int i, int j) {

  if (i>=j) {
    return 1;
  }
  int flag = palindrome_array(arr, n, i + 1, j - 1);
  if (arr[i] != arr[j]) {
    return 0;
  } else {
    return flag;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int res = palindrome_array(arr, n, 0, n - 1);

  if (res == 1) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
