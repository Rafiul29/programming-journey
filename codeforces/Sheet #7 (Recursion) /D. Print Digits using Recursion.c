#include <stdio.h>

void printdigit(int n) {
  if (n == 0)
    return;
  printdigit(n / 10);
  printf("%d ", n % 10);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int n;
    scanf("%lld", &n);
    printdigit(n);
    printf("\n");
  }
}