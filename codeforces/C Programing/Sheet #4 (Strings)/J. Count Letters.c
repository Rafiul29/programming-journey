// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
  char s[100002];
  scanf("%s", s);
  int counti[26] = {0};
  int len= strlen(s);
  for (int i = 0; i <len; i++) {
    int value = s[i] - 97;
    counti[value]++;
  }
  for(int i=0;i<26;i++){
    if(counti[i]!=0){
       printf("%c : %d\n",i+97,counti[i]);
    }
  }
  return 0;
}