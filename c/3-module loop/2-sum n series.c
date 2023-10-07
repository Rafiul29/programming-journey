#include<stdio.h>
int main(){
 long long  int i,n;
 long long int sum=0;
  scanf("%d",&n);
  for(i=0;i<=n;i++){
    sum+=i;
  }

  printf("%lld",sum);
  
  return 0;
}