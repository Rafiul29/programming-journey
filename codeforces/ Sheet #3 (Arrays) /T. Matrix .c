
// error single line ok
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n][n];
  int main = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  long long int mainD = 0, secondaryD = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        mainD += arr[i][j];
      } else if (n - 1 == i + j) {
        secondaryD += arr[i][j];
      }
    }
  }
 long long int diff=mainD-secondaryD;
  
  if(diff<0){
    printf("%lld",diff*-1);
  }else{
    printf("%lld",diff);
  }
  
  
  return 0;
}