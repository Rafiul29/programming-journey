
#include <stdio.h>

int hello(int n) {
  if (n == 0) {
    return 0;
  }
  printf("%d\n", n);
  hello(n - 1);
}


int main() {
  hello(5);
  return 0;
}