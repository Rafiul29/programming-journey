#include <stdio.h>

long long int combination(long long int n) {

  if (n == 0)
    return 1;
  return n * combination(n - 1);
}

int main() {
 long long int n, r;
  scanf("%lld %lld", &n, &r);
if(n>0 && r<=30 && n>=r){
  printf("%lld", combination(n)/(combination(r)*combination(n-r)));
}
// long long  int res = combination(n) / (combination(r) * combination(n - r));
//   printf("%lld", res);
  return 0;
}
