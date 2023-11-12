#include <stdio.h>

void printNumbern(int i) {
  // base case
  if (i == 0) {
    return;
  }
  
  printf("%d\n", i);
  
  printNumbern(i-1);
}

int main() {

  printNumbern(5);
  return 0;
}