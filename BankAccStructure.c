#include<stdio.h>
#include<string.h>

typedef struct BankAccount
{
    char name[100];
    int accountNo;
}ban;

int main(){
    ban acc1 = {"Rudra", 46544634};
    ban acc2 = {"sandip", 46446156};
    printf("name = %s\n", acc1.name);
    printf("Account num = %d\n", acc1.accountNo);
    return 0;
}