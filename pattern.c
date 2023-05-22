#include<stdio.h>

int main(){
  int i,j,k;
  for(i=0; i<5; i++){
    k=1;
    for(j=0; j<8; j++){
      if(j>4-i && j<4+i && k){
        printf("*");
        k=0;
      }
      else{
        printf(" ");
        k=1;
      }
    }
    printf("\n");
  }
  return 0;
}