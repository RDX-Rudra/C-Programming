#include<stdio.h>

int main(){
    int n,i;
    int arr[10];
    printf("Enter the numbr to print multiplication table: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++){
        arr[i-1]= n*i;
        printf("%d x %d = %d\n",n, i, arr[i-1]);
    }
    return 0;
}