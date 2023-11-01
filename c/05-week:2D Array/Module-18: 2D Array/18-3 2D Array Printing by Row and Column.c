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

 // exact row
  int e=2;
    for (int j = 0; j < col; j++) {
        printf("%d ", arr[2][j]);
  }

  // exact col
  int r=2;
    for (int i = 0; i < row; i++) {
        printf("%d ", arr[i][r]);
  }
  
  
  return 0;
}