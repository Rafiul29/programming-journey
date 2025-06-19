#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<=0 || b<=0) return;
    if (a == b) {
      printf("Square\n");
    } else if(a!=b) {
      printf("Rectangle\n");
    }
  }
  return 0;
}
