// way-1 
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int s = n - 1;
  int k = 1;
  for (int i = 1; i <= n*2; i++) {
    for (int j = 1; j <= s; j++) {
      printf(" ");
    }
    for (int j = 1; j <= k; j++) {
      printf("*");
    }
   if(i<=n-1){
     s--;
     k+=2;
   }else{
     if(i==n){
      s=s;
       k=k;
     }else{
       s++;
        k-=2;
     }
   }
    printf("\n");
  }

}



// way -2;
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int s = n - 1;
  int k = 1;
  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= s; j++) {
      printf(" ");
    }
    for (int j = 1; j <= k; j++) {
      printf("*");
    }
    s--;
    k += 2;
    printf("\n");
  }
  s = 0;
  k = n * 2 - 1;
  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= s; j++) {
      printf(" ");
    }
    for (int j = 1; j <= k; j++) {
      printf("*");
    }
    s++;
    k -= 2;
    printf("\n");
  }
  return 0;
}
