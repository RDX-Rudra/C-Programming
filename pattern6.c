#include<stdio.h>

int main(){
  int i,j,n,k;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    k=i;
    for(j=1; j<=n-i+1; j++){
        printf("%d ",k);
        k++;
    }
    printf("\n");
  }
  return 0;
}