
#include <stdio.h>

int main() {
  long long int l, r, m;
  scanf("%lld %lld %lld", &l, &r, &m);
  if (l < 0 && r < 0 && m < 0) {
    return 0;
  }

  if (l >= r) {
    int temp = l;
    l = r;
    r = temp;
  }

  long long int mul = 1;
  for (int i = l; i <= r; i++) {
    mul *= i;
    mul %= m;

  }
  printf("%lld", mul);

  return 0;
}