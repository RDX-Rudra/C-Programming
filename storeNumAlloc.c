#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    int k = 0,j=0;
    for(int i =1; i<10; i++){
        if(i%2 !=0){
            ptr[k]= i;
            k++;
        }
    }
    for(int i =0; i<5; i++){
        printf("%d number %d\n",i+1, ptr[i]);
    }
    realloc(ptr, 6);
    for(int i =1; i<=12; i++){
        if(i%2 == 0){
            ptr[j] = i;
            j++;
        }
    }
    for(int i =0; i<6; i++){
        printf("%d number %d\n",i+1, ptr[i]);
    }
    return 0;
}