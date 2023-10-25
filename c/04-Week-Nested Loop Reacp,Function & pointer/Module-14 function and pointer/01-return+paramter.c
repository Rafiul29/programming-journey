
#include <stdio.h>

int sum(int a,int b){
    int sum=a+b;
    return sum;
}

int main() {
   
    int result=sum(10,40);
    printf("%d",result);
    return 0;
}