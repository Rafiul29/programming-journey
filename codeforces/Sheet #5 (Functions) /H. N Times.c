#include <stdio.h>

void print(int n, char c) {
  for (int i = 1; i <= n; i++) {
     printf("%c ", c);
  }
  printf("\n");
}

int main() {
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n;
    char c;
    scanf("%d %c", &n, &c);
    print(n,c);
  }
}
