#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[100];
  scanf("%s %s", a, b);
  
 int i=strlen(a);
  for(int j=0;j<=strlen(b);j++){
    a[i]=b[j];
    i++;
  }
  
  printf("%s",a);
  
  return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[100];
  scanf("%s %s", a, b);

 int i=strlen(a);
  for(int j=0;j<=2;j++){
    a[i]=b[j];
    i++;
  }
a[i]='\0';
  printf("%s",a);

  return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[100];
  scanf("%s %s", a, b);
  
strcat(a,b);
  
  printf("%s",a);
  
  return 0;
}