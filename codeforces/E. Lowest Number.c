#include <stdio.h>
#include <limits.h>
int main() {
int n;
  scanf("%d", &n);
  int A[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&A[i]);
  }

  int min=INT_MAX;
  int index;
  for(int i=0; i<n;i++){
   if(A[i]<min){
     min=A[i];
     index=i;
   }
  }
    printf("%d %d\n",min,index+1);
  return 0;
}
