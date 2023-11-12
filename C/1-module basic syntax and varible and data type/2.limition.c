// int 
#include<stdio.h>
int main(){
  int a=1000000000; //give height digit 10^9 
  printf("%d",a);
  return 0;
}


#include<stdio.h>
int main(){
  long long int a=10000000000000000000; //give height digit 10^19 
  printf("%lld",a);
  return 0;
}

#include<stdio.h>
int main(){
  float a=24.321231234; //give height digit floating point 10^6 digit
  printf("%0.6f",a);
  return 0;
}

#include<stdio.h>
int main(){
  double a=2.123456789123456; //give height digit  10^16 float point 10^15
  printf("%0.15lf",a);
  return 0;
}