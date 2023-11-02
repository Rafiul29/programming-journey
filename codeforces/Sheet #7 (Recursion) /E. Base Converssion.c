
// time limit exited
#include <stdio.h>

void Base_Conversion(int n) {
  if (n == 0)
    return;
  Base_Conversion(n / 2);
  printf("%d",n%2);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int n;
    scanf("%lld", &n);
    Base_Conversion(n);
    printf("\n");
  }

  return 0;
}