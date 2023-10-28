// #include <stdio.h>
// #include <string.h>

void fun(int x){
  x=100;
  printf("%d\n",&x);
}
int main() {
  int x=10; 
  
  fun(x);
   printf("%d\n",&x);
  
  return 0;
}
