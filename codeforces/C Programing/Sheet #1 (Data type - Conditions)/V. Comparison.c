#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s;
  int a, b;
  scanf("%d %c %d", &a, &s, &b);
  if (s == 60) {
    if (a < b) {
      printf("Right");
    } else {
      printf("Wrong");
    }
  } else if (s == 62) {
    if (a > b) {
      printf("Right");
    } else {
      printf("Wrong");
    }
  } else if (s == 61) {
    if (a == b) {
      printf("Right");
    } else {
      printf("Wrong");
    }
  }
  return 0;
}