#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll = 445;
    s1.cgpa = 9.2;
    strcpy(s1.name, "rudra");

    printf("studenr name = %s\n",s1.name);
    printf("studenr roll no = %d\n",s1.roll);
    printf("studenr cgpa = %f\n",s1.cgpa);
    struct student s2;
    s2.roll = 446;
    s2.cgpa = 9.1;
    strcpy(s2.name, "suvam");

    printf("studenr name = %s\n",s2.name);
    printf("studenr roll no = %d\n",s2.roll);
    printf("studenr cgpa = %f\n",s2.cgpa);
    struct student s3;
    s3.roll = 447;
    s3.cgpa = 8.2;
    strcpy(s3.name, "aman");

    printf("studenr name = %s\n",s3.name);
    printf("studenr roll no = %d\n",s3.roll);
    printf("studenr cgpa = %f\n",s3.cgpa);
    return 0;
}
