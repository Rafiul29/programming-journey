#include <stdio.h>
#include <string.h>

void fun(int *p) {
  // derefernce
  *p = 100;

  printf("p address- %p\n", p);
}

int main() {

  int x = 10;
  fun(&x);
  printf("x address- %p\n", &x);

  return 0;
}
