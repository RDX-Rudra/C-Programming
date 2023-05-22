#include<stdio.h>
#include<string.h>

typedef struct complex
{
    int real;
    int img;
}c;

int main(){
    c num1 = {5, 8};
    c *ptr = &num1;
    printf("real part = %d\n", ptr->real);
    printf("imaginary part = %d\n", ptr->img);
    return 0;
}
