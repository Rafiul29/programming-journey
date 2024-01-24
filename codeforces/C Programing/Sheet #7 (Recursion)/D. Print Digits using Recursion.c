#include <stdio.h>

void printdigit(int n) {
  if (n == 0)
    return;
  printdigit(n / 10);
  printf("%d ", n % 10);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int n;
    scanf("%lld", &n);
    printdigit(n);
    printf("\n");
  }
}


#include <stdio.h>

void printdigit(int n) {
  if (n == 0)
    return;
  int x = n % 10;
  printdigit(n / 10);
  printf("%d ", x);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    printdigit(n);
    if(n==0){
       printf("0");
    }
    printf("\n");
  }
}