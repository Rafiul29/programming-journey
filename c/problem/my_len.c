#include <stdio.h>
#include<math.h>
#include <string.h>

int  my_len(char *str){
  return strlen(str);
}

int main() {
char str[40];
  scanf("%s",str);
  int len=my_len(str);
  printf("%d",len);
  return 0;
}