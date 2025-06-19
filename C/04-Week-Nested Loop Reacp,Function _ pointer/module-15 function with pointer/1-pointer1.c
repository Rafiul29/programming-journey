// #include <stdio.h>
// #include <string.h>
int main() {
  int a=10;
  int *ptr=&a;
  a=40;
  printf("a adress - %d\n",&a);
  printf("ptr value - %d\n",ptr);
  printf("ptr address - %d\n",&ptr);
  printf("ptr memory size- %d\n",sizeof(ptr));
  
  return 0;
}


// #include <stdio.h>
// #include <string.h>
int main() {
  int a=10;
  int *ptr=&a;
  int *ptr2=ptr;
  *ptr=100;
  printf("a adress - %d\n",a);
  printf("ptr value - %d\n",*ptr);
  printf("ptr2 address - %d\n",*ptr2);
  // printf("ptr memory size- %d\n",sizeof(ptr));
  
  return 0;
}
