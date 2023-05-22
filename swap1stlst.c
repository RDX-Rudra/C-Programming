#include<stdio.h>

int main(){
    int num,first,last,temp,place=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    last= num%10;
    temp = num;
    while(temp>9){
        temp /= 10;
        place *= 10;
    }
    first=temp;
    num=last*place+num%place;
    num=num/10*10+first;
    printf("The num after swapping is %d\n",num);
    return 0;
}
