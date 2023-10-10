#include <stdio.h>
int main() {
int a;
  scanf("%d",&a);
  int lastdigit=a%10;
  int firstdigit=a/10;
  if(a>=10 && a<=99){
    if(lastdigit%firstdigit==0 || firstdigit%lastdigit==0){
    printf("YES");
  }else{
    printf("NO");
  }
  }
}
