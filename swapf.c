#include<stdio.h>
void swap(int a, int b);
int main(){
  int i,j;
  printf("enter first number: ");
  scanf("%d",&i);
  printf("enter second number: ");
  scanf("%d",&j);
  swap(i,j);
  return 0;
}
void swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swapping first number = %d\n",a);
    printf("after swapping second number = %d\n",b);
}