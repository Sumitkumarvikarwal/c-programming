#include<stdio.h>
#include<string.h>

typedef struct computersciencestudent{
int roll;
float cgpa;
char name[100];
}cs;

int main()
{
// initisation
//struct student s1={1234, 9.6, "sumit"};
//or
cs s1;
s1.roll=1234;
s1.cgpa=9.6;
strcpy(s1.name, "sumit");
printf("roll no.= %d\n cgpa= %f\n name= %s\n", s1.roll, s1.cgpa, s1.name);
return 0;
}