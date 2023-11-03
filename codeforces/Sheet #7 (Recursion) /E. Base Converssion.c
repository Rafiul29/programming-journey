
// time limit exited
#include <stdio.h>

void Base_Conversion(int n) {
  if (n == 0) {
    return;
  }
  Base_Conversion(n / 2);
  printf("%d", n % 2);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    Base_Conversion(n);
    printf("\n");
  }

  return 0;
}

// error
#include <stdio.h>

int decimal_binary(int n) {
  if (n == 0)
    return 0;
  else
    return ((n % 2) + 10 * decimal_binary(n / 2));
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    printf("%d", decimal_binary(n));
    printf("\n");
  }
  
  return 0;
}
