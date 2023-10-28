#include <stdio.h>
#include <string.h>

// parameter (*str)
void fun(char str[]) {
  printf("%d",strlen(str));
 
}

int main() {

char str[20]="abcd";
  // int sz=sizeof(str)/sizeof(char);
  // printf("%d",sz);
  fun(str);

  return 0;
}
