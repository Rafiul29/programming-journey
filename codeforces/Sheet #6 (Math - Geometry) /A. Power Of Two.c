#include <stdio.h>

int main() {

  long long int n;
  scanf("%lld", &n);

  int flag = 1;
  while (n != 1) {
    if (n % 2 != 0) {
      flag = 0;
    }
    n = n / 2;
  }
  if (flag == 1) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}