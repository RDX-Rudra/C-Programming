#include<stdio.h>
int main(){
    int num, rem, rev, temp, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Palindrome numbers between 1 to %d are: ",n);
    for(num=1;num<=n;num++){
        rev=0;
        temp=num;
        while(temp){
           rem=temp%10;
           temp=temp/10;
           rev=rev*10+rem;
        }
        if(num==rev)
           printf("%d, ",num);
    }    
    return 0;
}