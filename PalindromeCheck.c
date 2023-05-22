#include<stdio.h>

int main(){
    int a,c,rem,b=0;
    printf("Enter a number: ");
    scanf("%d",&c);
    a=c;
    rem=a%10;
    while(rem>0){
        b+=rem;
        a/=10;
        rem=a%10;
        b*=10;
    }
    b/=10;
    if(b==c){
        printf("%d is a palindrome number",c);
    }
    else{
        printf("%d is not a palindrome number",c);
    }
    return 0;
}