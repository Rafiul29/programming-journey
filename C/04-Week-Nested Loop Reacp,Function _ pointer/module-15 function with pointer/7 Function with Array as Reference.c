#include <stdio.h>
#include <string.h>

void fun(int arr[],int n) {
  
  for(int i=0;i<n;i++){
    // printf("%d ",arr[i]+1);
    arr[i]=arr[i]+100;
  }
 printf("\n");
  
}

int main() {

int arr[5]={10,20,30,40,50};

  fun(arr,5);
    
  for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
  }

  return 0;
}

void fun(int *p, int *q) {
 int temp=*p;
 *p=*q;
 *q=temp;
}

int main() {

int a=6,b=5;
fun(&a,&b);

printf("%d %d\n",a,b);
  return 0;
}