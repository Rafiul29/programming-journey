#include <stdio.h>
#include<string.h>
int main() {
  char str[10];
  scanf("%s",str);
  int count=0;
  // for(int i=0;str[i]!='\0';i++){
  //   count++;
  // }
  // while loop
  int i=0;
  while(str[i]!='\0'){
    count++;
    i++;
  }
  printf("%d\n",count);
  // built in function
  int stl=strlen(str);
  printf("%d",stl);
  return 0;
 
}