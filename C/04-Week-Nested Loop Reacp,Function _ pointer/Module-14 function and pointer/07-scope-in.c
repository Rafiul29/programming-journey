#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scope() {
  int x = 100;
  printf("%p\n", &x);
}

int x = 6;

int main() {

  scope();
  printf("%p\n", &x);

  return 0;
}