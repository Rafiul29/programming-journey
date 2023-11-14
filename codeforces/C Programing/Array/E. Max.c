#include <stdio.h>
int main() {
  int n,a,max=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a);
    if(a>max){
      max=a;
    }
  }
  printf("%d",max);
}


// min max value find
#include <stdio.h>
#include <limits.h>
int main() {
  int n,a,max=INT_MIN,min=INT_MAX;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a);
    if(a>max){
      max=a;
    }
    if(a<min){
      min=a;
    }
  }
  printf("%d %d",min,max);
}
