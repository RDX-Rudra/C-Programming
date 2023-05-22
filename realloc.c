#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    printf("enter 5 numbers : ");
    for(int i =0; i<5; i++){
        scanf("%d",&ptr[i]);
    }
    realloc(ptr, 8);
    printf("enter 8 numbers : ");
    for(int i =0; i<8; i++){
        scanf("%d",&ptr[i]);
    }
    for(int i =0; i<8; i++){
        printf("%d number %d\n",i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}