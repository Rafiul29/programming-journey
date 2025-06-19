#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[100];
  scanf("%s %s", a, b);
  int i = 0;
  while (1) {
    if (a[i] == '\0' && b[i] == '\0') {
      printf("same");
      break;
    } else if (a[i] == '\0') {
      printf("A small");
      break;
    } else if (b[i] == '\0') {
      printf("B small");
      break;
    }

    if (a[i] == b[i]) {
      i++;
    } else if (a[i] < b[i]) {
      printf("A small\n");
      break;
    } else {
      printf("B small\n");
      break;
    }
  }
  return 0;
}


// built in function

#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[100];
  scanf("%s %s", a, b);
  int v=strcmp(a,b);
  if(v<0){
    printf("A small");
  }else if(v>0){
    printf("B small");
  }else{
    printf("Same");
  }
  return 0;
}