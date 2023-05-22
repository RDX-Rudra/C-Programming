#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("xxx.txt", "r");
    if(fptr == NULL)
        printf("file doesnot exist");
    else
        fclose(fptr);
    return 0;
}