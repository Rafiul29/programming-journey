// Online C compiler to run C program online
#include <stdio.h>

int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}

int main() {
    // Write C code here
    // printf("Hello world");
    int result=sum();
    printf("%d",result);
    return 0;
}