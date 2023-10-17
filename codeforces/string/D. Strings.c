#include <stdio.h>
#include <string.h>
int main() {
  char s1[12], s2[12];
  scanf("%s %s", s1, s2);

  int s1len = strlen(s1), s2len = strlen(s2);
  int s3len = s1len + s2len;
  char s3[s3len];

  for (int i = 0; i < s1len; i++) {
    s3[i] = s1[i];
  }

  int i = s1len;
  for (int j = 0; j < s2len; j++) {
    s3[i] = s2[j];
    i++;
  }
  s3[s3len] = '\0';
  
  char temp = s1[0];
  s1[0] = s2[0];
  s2[0] = temp;

  printf("%d %d\n", s1len, s2len);
  printf("%s\n", s3);
  printf("%s %s", s1, s2);
}