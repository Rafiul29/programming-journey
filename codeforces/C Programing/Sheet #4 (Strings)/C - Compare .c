#include <stdio.h>
#include <string.h>
int main() {
  char a[22], b[22];
  scanf("%s %s", a, b);
  int v=strcmp(a,b);
  if(v<0){
    printf("%s",a);
  }
  if(v>0){
    printf("%s",b);
  }
  if(v==0){
    printf("%s",a);
  }
  

  return 0;
}