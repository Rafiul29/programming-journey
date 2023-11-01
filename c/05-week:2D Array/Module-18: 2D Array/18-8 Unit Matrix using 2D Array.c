

// primary digonal matrix
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
    //  if(i==j && arr[i][j]==1){
    //    continue;
    //  }
    if(i+j==row-1){
      if(arr[i][j]==1){
        flag=0;
      }
      continue;
    }
      if(arr[i][j]!=0){
        flag=0;
      }
    }
  }

  if(flag==1){
    printf("Primary Unit Matrix");
  }else{
    printf("Not Unit Matrix");
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
     if(i+j==row-1 && arr[i][j]==1){
       continue;
     }
      if(arr[i][j]!=0){
        flag=0;
      }
    }
  }

  if(flag==1){
    printf("Seconday Unit Matrix");
  }else{
    printf("Not Unit Matrix");
  }
  
  return 0;
}