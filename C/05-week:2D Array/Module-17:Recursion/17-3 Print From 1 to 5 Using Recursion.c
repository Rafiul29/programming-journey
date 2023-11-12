
#include <stdio.h>

void printNumbern(int i) {
  if (i == 6) {
    return;
  }
  
  printf("%d\n", i);
  printNumbern(i + 1);
}

int main() {

  printNumbern(1);
  return 0;
}