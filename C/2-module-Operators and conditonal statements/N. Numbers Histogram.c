#include <stdio.h>
#include <string.h>
int main() {
  char s;
  scanf("%c", &s);
  int n;
  scanf("%d", &n);
  int a;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    for (int j = 0; j < a; j++) {
      printf("%c", s);
    }
    printf("\n");
  }
  return 0;
}
