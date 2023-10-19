#include <string.h>
#include <stdio.h>
int main() {
 char s[100];
  scanf("%s",s);
  int cnt[26]={0};
  for(int i=0;i<strlen(s);i++){
    int value=s[i]-97;
    cnt[value]++;
  }
  // for(int i=0;i<26;i++){
  //   if(cnt[i]!=0){
  //      printf("%c - %d\n",i+97,cnt[i]);
  //   }
  // }
  // counting string 
  for(int i=0;i<strlen(s);i++){
    int value=s[i]-97;
      printf("%c - %d\n",value+97,cnt[value]);
  }
  return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
  char s[100];
  scanf("%s", s);
  int cnt[26] = {0};
  for (int i = 0; i < strlen(s); i++) {
    int value = s[i] - 97;
    cnt[value]++;
  }
  // for(int i=0;i<26;i++){
  //   if(cnt[i]!=0){
  //      printf("%c - %d\n",i+97,cnt[i]);
  //   }
  // }
  for (int i = 0; i < strlen(s); i++) {
    int value = s[i] - 97;
    if (cnt[value] != 0) {
      printf("%c - %d\n", value + 97, cnt[value]);
    }
    cnt[value]=0;
  }
  return 0;
}