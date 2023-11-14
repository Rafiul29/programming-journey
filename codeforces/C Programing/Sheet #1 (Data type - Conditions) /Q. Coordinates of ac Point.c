#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 float x,y;
  scanf("%f %f",&x,&y);
  // origin
  if(x==0 && y==0){
    printf("Origem");
  }
  // x-axis
  if(x==0 && y>0 || x==0 && y<0){
    printf("Eixo Y");
  }
  // y-axis
  if(x>0 && y==0 || x<0 && y==0){
    printf("Eixo X");
  }

  // Q1
  if(x>0 && y>0){
    printf("Q1");
  }
  // Q2
  else if(x<0 && y>0){
    printf("Q2");
  }
  // Q3
  else if(x<0 && y<0){
    printf("Q3");
  }
  else if(x>0 && y<0){
    printf("Q4");
  }
  return 0;
}