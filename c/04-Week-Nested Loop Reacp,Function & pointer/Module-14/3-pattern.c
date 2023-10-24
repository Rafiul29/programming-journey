#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int s, k;
  s = n - 1;
  k = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= s; j++) {
      printf(" ");
    }
    for (int j = 1; j <= k; j++) {
      printf("*");
    }
    s--;
    k+=2;
    printf("\n");
  }

  return 0;
}

// reverse 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int s, k;
  // s = 1;
  // k = n;
  for (int i = n; i >= 1; i--) {
    for (int j = n-i; j >= 1; j--) {
      printf(" ");
    }
    for (int j = i*2-1; j >= 1; j--) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}