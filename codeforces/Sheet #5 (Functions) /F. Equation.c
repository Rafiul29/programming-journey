#include <stdio.h>

long long int equation(int x, int n) {
  long long int sum=0,mul=1;
  for(int i=2;i<=n;i+=2){
    for(int j=1;j<=i;j++){
      mul*=x;
    }
    sum+=mul;
    mul=1;
  }
  return sum;
}

int main() {

  int x,n;
  scanf("%d %d",&x,&n);
 long long int result =equation(x,n);
  printf("%lld",result);
  return 0;
}
