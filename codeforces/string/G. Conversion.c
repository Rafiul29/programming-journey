#include <stdio.h>
#include <string.h>
int main() {
  char s[100001];
  scanf("%s", s);
  for(int i = 0; i < strlen(s); i++) {
    if(s[i]>=65 && s[i]<=90){
      printf("%c",s[i]+32);
    }
    if(s[i]>=97 && s[i]<=122){
      printf("%c",s[i]-32);
    }
    if(s[i]==44){
      printf("%c",s[i]-12);
    }
  }
  // char a;
  // scanf("%c", &a);
  // printf("%d", a);
  return 0;
}