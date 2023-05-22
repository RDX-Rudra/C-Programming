#include<stdio.h>

int main(){
  int i,j,n;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    for(j=1; j<=(2*n-1); j++){
      if(j==i || j==n-1+i || i==1 && j<=n || i==n && j>=n){
        printf("*  ");
      }
      else{
        printf("   ");
      }
    }
    printf("\n");
  }
  return 0;
}      