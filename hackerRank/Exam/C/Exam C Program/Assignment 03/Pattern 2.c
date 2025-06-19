// You will be given a positive integer N, you need to print a pattern shown below using this N.

// For example: If N=5, the pattern will look like below.

//    1
//    21
//   321
//  4321
// 54321



#include <stdio.h>
int main() {

  int n;
  scanf("%d", &n);
  int s = n - 1;
  int k = 1;
  for (int i = 1; i <= n; i++) {
    // space print;
    for (int j = 1; j <= s; j++) {
      printf(" ");
    }
    for (int j = k; j >= 1; j--) {
      printf("%d",j);
    }
    s--;
    k++;

    printf("\n");
  }

  return 0;
}