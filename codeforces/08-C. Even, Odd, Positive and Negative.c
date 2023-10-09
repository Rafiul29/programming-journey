#include <stdio.h>
int main() {
  int n,i,a;
  int even=0,odd=0,pos=0,neg=0;
   scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&a);
    if(a%2==0){
      even++;
      if(a>0){
        pos++;
      }else if(a<0){
        neg++;
      }
    }else{
      odd++;
      if(a>0){
        pos++;
      }else if(a<0){
        neg++;
      }
    }
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
}

