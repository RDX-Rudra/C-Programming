#include<stdio.h>
void main(){
    int i,j,r,n,m=0,k=1;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    n=2*r-1;
    for(i=1; i<=n;i++){
        i<=r?m++:m--;
        for(j=1;j<=n;j++){
            if(j>=r+1-m && j<=r-1+m && k==1){
                printf(" *");
                k=0;
            }else{
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}