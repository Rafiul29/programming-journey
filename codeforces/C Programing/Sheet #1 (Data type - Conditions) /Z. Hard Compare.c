#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  long long int a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  long long int left = b * log(a);
  long long int righ = d * log(c);
  if (left > righ) {
    printf("YES");
  } else if (left < righ) {
    printf("NO");
  } else if (left == righ) {
    printf("NO");
  }
  return 0;
}