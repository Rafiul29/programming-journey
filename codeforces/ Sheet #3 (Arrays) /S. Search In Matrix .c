#include <stdio.h>
int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n][m];
  int main = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int f;
  scanf("%d", &f);
  int flag = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == f) {
        flag = 0;
      }
    }
  }
  if (flag == 1) {
    printf("will take number");
  }
  if (flag == 0) {
    printf("will not take number");
  }

  return 0;
}