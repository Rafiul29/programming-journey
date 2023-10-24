#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = n; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}