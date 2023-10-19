#include <limits.h>
#include <stdio.h>
int main() {
  int n, i;
  scanf("%d", &n);
  int arr[n];
  // int max = INT_MIN;
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    // if (arr[i] > max) {
    //   max = arr[i];
    // }
  }
  int countArr[10]={0};

  for (i = 0; i < n; i++) {
    countArr[arr[i]]++;
  }
  for (i = 0; i <= 10; i++) {
    printf("%d - %d\n",i,countArr[i]);
  }
  
  return 0;
}