// Problem Statement

// You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

// Note: Vowels are a,e,i,o and u. The rest are called consonants.

// Input Format

//     Input will contain a string S.

// Constraints

//     1 <= |S| <= 100000 ; Here |S| means the length of string S.

// Output Format

//     Output the number of consonants.

// Sample Input 0

// thefoxisgone

// Sample Output 0

// 7

// Sample Input 1

// sjxapw

// Sample Output 1

// 5

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100001];
    scanf("%s",s);
    int c=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            c++;
        }
    }
    printf("%d",c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

