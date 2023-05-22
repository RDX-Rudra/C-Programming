#include<stdio.h>

void main(){
  int row = 3;
  for (int i = 1; i < 2*row; i++){
    int p = i>row? 2*row - i: i;
    for (int j = 0; j < p; j++){
      printf(" ");
    }
    for (int j = row - p; j >= 0; j--){
      if(j==0 || j==row-p)
      printf("%d ",i);
      else
      printf("  ");
    }
    printf("\n");
  }
}