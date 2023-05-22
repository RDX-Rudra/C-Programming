#include<stdio.h>
void perfectNum(int n);
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    perfectNum(a);
    return 0;
  
}
void perfectNum(int n){
    int i,sum=0;
    for(i=1; i<n; i++){
        if(n%i == 0){
            sum=sum+i;
        }
    }
    if(sum == n){
        printf("perfect number");
    }
    else{
       printf("not perfect number"); 
    }
}