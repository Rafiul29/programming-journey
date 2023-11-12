#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char str[10];
    fgets(str,5,stdin);
    printf("%s",str);

    return 0;
}