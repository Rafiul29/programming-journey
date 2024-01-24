// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
  int n;
  char str[1000002];
  scanf("%d", &n);
  getchar();
  fgets(str, n + 1, stdin);
  int sum = 0;
  for (int i = 0; i < strlen(str); i++) {
    sum += str[i] - '0';
  }

  printf("%d", sum);

  return 0;
}