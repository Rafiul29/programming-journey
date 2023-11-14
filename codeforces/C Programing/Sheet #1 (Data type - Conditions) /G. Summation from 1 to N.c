#include <stdio.h>
#include <string.h>
int main() {
  long long int a;
  scanf("%lld", &a);
  long long int sum = (a * (a + 1)) / 2;
  printf("%lld", sum);

  return 0;
}