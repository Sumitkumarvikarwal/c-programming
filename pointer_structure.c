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
struct student s1;
struct student *ptr=&s1;
s1.roll=1234;
s1.cgpa=9.6;
strcpy(s1.name, "sumit");
printf("roll no.= %d\n cgpa= %f\n name= %s\n", (*ptr).roll, ptr->cgpa,ptr->name);
return 0;
}