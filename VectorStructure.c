#include<stdio.h>
#include<string.h>

typedef struct vector
{
    int x;
    int y;
}v;
void calsum(v v1, v v2, v sum);
int main(){
    v v1 = {5, 10};
    v v2 = {3, 7};
    v sum = {0};
    calsum(v1, v2, sum);
    return 0;
}

void calsum(v v1, v v2, v sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x : %d\n", sum.x);
    printf("sum of y : %d\n", sum.y);
}