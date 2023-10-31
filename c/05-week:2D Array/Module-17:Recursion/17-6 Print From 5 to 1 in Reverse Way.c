#include <stdio.h>

void printNumber(int i) {
  if(i==6) return;
  printNumber(i+1);
  printf("%d ",i);
}


int main() {
printNumber(1);
  return 0;
}