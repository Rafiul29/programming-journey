// You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be 32 bit integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

// Palindrome: A palindrome is a word that reads the same forward and backward.

// Input Format

//     Input will contain the string S.

// Constraints

//     1 <= |S| <= 1000; Here |S| means the length of the string.

// Output Format

//     Output "Palindrome" or "Not Palindrome" without the quotation marks.

// Sample Input 0

// madam

// Sample Output 0

// Palindrome

// Sample Input 1

// abccba

// Sample Output 1

// Palindrome

// Sample Input 2

// x

// Sample Output 2

// Palindrome

// Sample Input 3

// abca

// Sample Output 3

// Not Palindrome





#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {

  int i = 0, j = strlen(s) - 1;
  while (i <= j) {
    if (s[i] != s[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

int main() {

  char s[1002];
  scanf("%s", s);

  int num = is_palindrome(s);
  
  if (num == 1) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }
  
  return 0;
}