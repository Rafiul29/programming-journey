// way 1
// input 10% 20%
// output 10% 20%
#include<stdio.h>
int main(){
  int a,b;
  char p;
  scanf("%d%c %d%c",&a,&p,&b,&p);
  printf("%d%% %d%%",a,b);
  return 0;
}


// way 2
#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%% %d%%",&a,&b);
  printf("%d%% %d%%",a,b);
  return 0;
}


#include<stdio.h>
int main(){
  int a,b;
  scanf("%da %db",&a,&b);
  printf("%da %db",a,b);
  return 0;
}