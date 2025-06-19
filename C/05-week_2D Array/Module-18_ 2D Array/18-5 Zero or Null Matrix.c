
// primary diagonal Matrix
#include <stdio.h>

int main() {
  int row, col;
  scanf("%d %d", &row, &col);
  
  int arr[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int flag = 1;
  
  if(row!=col){
   flag=0; 
  }
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     if(i==j){
       continue;
     }
      if(arr[i][j]!=0){
        flag=0;
      }
    }
  }

  if(flag==1){
    printf("Primary Diagonal Matrix");
  }else{
    printf("Not Diagonal Matrix");
  }
  
  return 0;
}





// Secondary diagonal matrix
#include <stdio.h>

int main() {
  int row, col;
  scanf("%d %d", &row, &col);
  
  int arr[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int flag = 1;
  
  if(row!=col){
   flag=0; 
  }
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     if(i+j==row-1){
       continue;
     }
      if(arr[i][j]!=0){
        flag=0;
      }
    }
  }

  if(flag==1){
    printf("Secondary Diagonal Matrix");
  }else{
    printf("Not Diagonal Matrix");
  }
  
  return 0;
}









// primary diagonal check

#include <stdio.h>

int main() {
  int row, col;
  scanf("%d %d", &row, &col);
  
  if(row!=col){
    printf("Not Square Matrix");
  }
  
  int arr[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int countz = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i!=j && arr[i][j]==0) {
        countz++;
      }
    }
  }
   
  countz == row *col-col ? printf("Diagonal Matrix") : printf("Not Diagonal Matrix");

  return 0;
}