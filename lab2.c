#include<stdio.h>
void main()
{
int a,i,j;
printf("enter row number :-  ");
scanf("%d",&a);
for(i=1;i<=a;i++){
   for(j=i;j>=1;j--){
      if(j<=i){
        printf("%d",j%2);
      }
      }
      printf("\n");
   }
}
