#include <stdio.h>
int main() {
  long long int m, n,k;
    long long int murti = 0;
  scanf("%lld %lld %lld", &m, &n, &k);
  if (m < n && m < k) {
    murti += m;
    n -= m;
    k -= m;
    m -= m;

  } else if (n < m && n < k) {
    murti += n;
    k -= n;
    m -= n;
    n -= n;
   if(m/2>k){
     murti+=k;
   }else{
     murti+=m/2;
   }
  } else {
    murti += k;
    m -= k;
    n -= k;
    k -= k;
  }
  printf("%lld",murti);
}
