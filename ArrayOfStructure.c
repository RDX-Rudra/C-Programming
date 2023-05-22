#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student cse[10];
    cse[0].roll = 445;
    cse[0].cgpa = 9.2;
    strcpy(cse[0].name, "rudra");

    printf("studenr name = %s\n",cse[0].name);
    printf("studenr roll no = %d\n",cse[0].roll);
    printf("studenr cgpa = %f\n",cse[0].cgpa);
    return 0;
}
