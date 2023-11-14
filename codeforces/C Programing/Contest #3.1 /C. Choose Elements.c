#include <stdio.h>
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  if (n <= 0 || k <= 0)
    return;

  int arr[n+1];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
 long long int sum = 0;

  for (int i = 0; i < k; i++) {
    if(arr[i]>0){
       sum += arr[i];
    }
  }
  printf("%lld", sum);

  return 0;
}
