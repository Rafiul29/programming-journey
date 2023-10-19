#include <stdio.h>
#include <string.h>
int main() {
  int x;
  scanf("%d", &x);
  int c=0;
  for (int i = 2; i < x / 2; i++) {
    if (x % i == 0) {
    c++;
    }
  }
  if (c == 0) {
     printf("YES");
  }else{
    printf("NO");
  }
 
  return 0;
}