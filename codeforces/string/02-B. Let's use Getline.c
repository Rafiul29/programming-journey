// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char str[1000001];
    fgets(str,1000001,stdin);
    int i=0;
    while(str[i]!='\\'){
         printf("%c",str[i]);
         i++;
    }
    return 0;
}