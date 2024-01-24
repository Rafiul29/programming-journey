#include <stdio.h>
#include <math.h>
int main() {
   int a,b;
  scanf("%d %d", &a,&b);
  float res;
  res= (float)a/b;
  int flr=floor(res);
  int cil=ceil(res);
  int roun=round(res);
  printf("floor %d / %d = %d\n",a,b,flr);
  printf("ceil %d / %d = %d\n",a,b,cil);
  printf("round %d / %d = %d\n",a,b,roun);
  return 0;
}