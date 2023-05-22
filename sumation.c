#include<stdio.h>
int fun(int n){
    int i,j,sum=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum++;
        }
    }
    return(sum);
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",fun(a));
    return 0;
}