#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 int n;
  scanf("%d",&n);
  int year=n/365;
  int month=(n-(year*365))/30;
  int day=n-(year*365)-(month*30);
  printf("%d years\n%d months\n%d days\n",year,month,day);
  return 0;
}