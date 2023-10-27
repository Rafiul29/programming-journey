
#include <stdio.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);
  int s = n - 1;
  
  for (int i = 1; i <= n; i++) {
    // space print
    for (int j = 0; j <= s; j++) {
      printf(" ");
    }
    
    // start print
    for (int j = 1; j <= 2 * i - 1; j++) {
      if(j == 1 || j == 2 * i - 1 || i==n){
        printf("*");
      }else{
        printf(" ");
      }
    }
    s--;
    printf("\n");
  }
  
  return 0;
}
