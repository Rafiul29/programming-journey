#include <stdio.h>
int main() {
  int x,p;
  float y;
    scanf("%d %d",&x,&p);
  float t=100-x;
  y=(100*p)/t;
  printf("%0.2f",y);
  
  return 0;
}
