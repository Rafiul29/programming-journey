
#include <stdio.h>

int checkPrime(int n) {
  int flag = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }
  return flag;
}

int main() {

  int t;
  scanf("%d", &t);
  if (t < 0) {
    return 0;
  }
  while (t--) {
    long long int n;
    if (n < 0) {
      return 0;
    }
    scanf("%lld", &n);
    int res = checkPrime(n);
    if (res == 1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}