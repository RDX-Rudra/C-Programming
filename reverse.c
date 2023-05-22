#include<stdio.h>

int main(){
    int i, rem;
    printf("enter a number: ");
    scanf("%d",&i);
    printf("revrese number of %d is: ",i);
    do{
        rem=i%10;
        printf("%d",rem);
        i=i/10;
    }while(i>0);
    printf("\n");
    return 0;
}