#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Rudra", 445, 9.2};
    struct student *ptr = &s1;

    printf("studenr name = %s\n",ptr->name);
    printf("studenr roll no = %d\n",ptr->roll);
    printf("studenr cgpa = %f\n",ptr->cgpa);
    return 0;
}
