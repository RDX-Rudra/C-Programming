#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("apple.txt", "a");
    fputc('M', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);
    fclose(fptr);
    return 0;
}