#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("apple.txt", "a");
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            fprintf(fptr, "\n%d", i);
        }
    }
    fclose(fptr);
    return 0;
}