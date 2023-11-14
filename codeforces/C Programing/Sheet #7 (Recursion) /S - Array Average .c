#include <stdio.h>

long long int array_average(int arr[],int n,int i) {
 if(i==n) return 0;
  return arr[i]+array_average(arr,n,i+1);
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
long long  int ans = array_average(arr,n,0);
  float avarage=ans/n;
  printf("%0.6f", avarage);
  return 0;
}
