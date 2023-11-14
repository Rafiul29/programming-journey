#include <stdio.h>
#include <string.h>
int CountVowels(char str[], int i) {

  // base case
  if (str[i] == '\0') {
    return 0;
  }

  int ans = CountVowels(str, i + 1);

  if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
      str[i] == 'U') {
    return ans + 1;
  }
  if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
      str[i] == 'u') {
    return ans + 1;
  } else {
    return ans;
  }
  
}

int main() {
  char str[202];
  fgets(str, 202, stdin);
  int res = CountVowels(str, 0);
  printf("%d", res);
  return 0;
}