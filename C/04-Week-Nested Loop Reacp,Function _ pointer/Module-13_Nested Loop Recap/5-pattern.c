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
  for (int i = 1; i <= n; i++) {
    
    for (int j=1;j<=i;j++) {
      printf("%d ",j);
    }
    printf("\n");
  }

  return 0;
}