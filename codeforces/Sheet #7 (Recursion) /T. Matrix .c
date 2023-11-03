#include <stdio.h>
#include <stdlib.h>
int main() {

  int n;
  scanf("%d", &n);
  int arr[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int mainD = 0;
  int secondaryD = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        mainD += arr[i][j];
      } else if (n - 1 == i + j) {
        secondaryD += arr[i][j];
      }
    }
  }

  int ab = abs(mainD - secondaryD);
  printf("%d\n",ab);

  return 0;
}