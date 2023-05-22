#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
}s;

int main(){
    s s1 = {"Rudra", 445, 9.2};

    printf("studenr name = %s\n",s1.name);
    printf("studenr roll no = %d\n",s1.roll);
    printf("studenr cgpa = %f\n",s1.cgpa);
    return 0;
}
