#include <stdio.h>
#include<limits.h>

int Min_Max_Func(int arrr[],int n,int *max) {
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(arrr[i]<min){
      min=arrr[i];
    }
  }

  for(int i=0;i<n;i++){
    if(arrr[i]>*max){
      *max=arrr[i];
    }
  }
  return min;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int max=INT_MIN;
  int min=Min_Max_Func(arr,n,&max);
  printf("%d %d",min,max);
}