#include <stdio.h>
#include<math.h>

int my_abs(int a){
  return abs(1.0*a);
}

int main() {
int n;
  scanf("%d",&n);
  int result=my_abs(n);
  printf("%d",result);
  return 0;
}