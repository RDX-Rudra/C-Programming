#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("apple.txt", "w");
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    return 0;
}