#include<stdio.h>

int main(){
  int a;
  printf("enter the size of array : ");
  scanf("%d",&a);
  int arr[a];
  printf("Enter intigers: ");
  for(int i=0; i<a; i++){
    scanf("%d",&arr[i]);
  }
  printf("Displaying intigers: ");
  for(int i=0; i<a; i++){
      printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}