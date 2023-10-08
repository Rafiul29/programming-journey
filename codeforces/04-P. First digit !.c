#include <stdio.h>
#include <math.h>
int main() {
  int a;
  scanf("%d",&a);
  int digit=floor(a/1000);
  if(digit%2==0){
    printf("EVEN");
  }else{
   printf("ODD");
  }
}
