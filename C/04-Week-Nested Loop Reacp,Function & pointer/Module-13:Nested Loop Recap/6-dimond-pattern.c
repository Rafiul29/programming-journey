#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, s, k;
  scanf("%d", &n);
  s = n - 1;
  k = 1;
  for (int i = 1; i <= (2 * n) - 1; i++) {
   // space print
    for(int j = 1; j <= s; j++) {
      printf(" ");
    }
    //start print
    for(int j=1; j<=k; j++){
      printf("*");
    }
    if(i<=n-1){
      k+=2;
      s--;
    }else{
      k-=2;
      s++;
    }
   
    printf("\n");
  }

  return 0;
}