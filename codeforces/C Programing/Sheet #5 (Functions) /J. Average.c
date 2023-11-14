#include <math.h>
#include <stdio.h>
#include <string.h>

// float average(float *arr, int n) {
//   float sum = 0;
//   for (int i = 0; i < n; i++) {
//     sum += arr[i];
//   }
//   float aver=sum/n;
//   return aver;
// }
int main() {
  int n;
  scanf("%d", &n);
  float arr[1000];
  for (int i = 0; i < n; i++) {
    scanf("%f", &arr[i]);
  }
  // float ava = average(arr, n);

  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  float aver=sum/n;

  printf("%0.7f", aver);
  return 0;
}
