#include <stdio.h>
int main() {
int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&arr[i]);
  }
  
  int findvalue;
  scanf("%d",&findvalue);
  int c=0;
  for(int i=0; i<n;i++){
    if(arr[i]==findvalue){
      c++;
      printf("%d",i);
      break;
    }
  }
if(c==0){
   printf("-1");
}
 
  return 0;
}
