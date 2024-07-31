#include<stdio.h>
#include<string.h>

struct student{
int roll;
float cgpa;
char name[100];
};

int main()
{
// initisation
//struct student s1={1234, 9.6, "sumit"};
//or
struct student s1[100];
s1[0].roll=1234;
s1[0].cgpa=9.6;
strcpy(s1[0].name, "sumit");
printf("roll no.= %d\n cgpa= %f\n name= %s\n", s1[0].roll, s1[0].cgpa, s1[0].name);
return 0;
}