#include <stdio.h>
int main() {
  int i, n, arr[100000];

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
int max=-100001,min=100001,minid,maxid;
  
  for (i = 0; i < n; i++) {
    if(arr[i]<min){
      min=arr[i];
      minid=i;
    }
    if(arr[i]>max){
      max=arr[i];
      maxid=i;
    }
  }
arr[minid]=max;
arr[maxid]=min;
  
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}