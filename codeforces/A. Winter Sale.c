#include <stdio.h>
int main() {
  int x,p;
  float originalPrice;
  scanf("%d %d",&x,&p);
  float discount = 1-(float)x/100;
  originalPrice=p/discount;
  printf("%0.2lf",originalPrice);
  return 0;
}
