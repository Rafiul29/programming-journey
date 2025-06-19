#include <stdio.h>
#include <string.h>

void fun(int *p) {
  // de refernce
  *p = 100;

  printf("p address- %p\n", p);
  
}

int main() {

int arr[4]={1,2,3,4};

  printf("0th index addess - %d\n",&arr[0]);
  printf("arr address - %d\n",arr);

  // 0th index
  printf("0th index value - %d\n",&arr[0]);
  printf("arr address - %d\n",arr);
  
  // 1th index
  printf("0th index value - %d\n",&arr[1]);
  printf("arr address - %d\n",arr+1);

  // 0th index value
  printf("0th index value - %d\n",arr[1]);
  printf("arr address - %d\n",*(arr+1));


for(int i=0;i<4;i++){
    printf("%d\n",*(arr+i));
  }
  
  return 0;
}