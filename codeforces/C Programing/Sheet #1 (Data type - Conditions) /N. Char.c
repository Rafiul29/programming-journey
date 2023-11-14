#include <stdio.h>
int main() {
   char a;
  scanf("%c",&a);
  if(a>=97 && a<=122){
    printf("%c",a-32);
  }else{
     printf("%c",a+32);
  }
}


// Another way

#include <stdio.h>
int main() {
   char a;
  scanf("%c",&a);
  if(a>='a' && a<='z'){
    printf("%c",a-32);
  }else{
     printf("%c",a+32);
  }
}
