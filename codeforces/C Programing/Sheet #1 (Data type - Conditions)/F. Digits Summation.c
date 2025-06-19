#include <stdio.h>
#include <string.h>
int main() {
  long long int a,b;
  scanf("%lld %lld",&a,&b);
  int alastdigit=a%10;
  int blastdigit=b%10;
  printf("%d",alastdigit+blastdigit);
  return 0;
}