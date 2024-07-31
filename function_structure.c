#include<stdio.h>
#include<string.h>

struct student{
int roll;
float cgpa;
char name[100];
};
void printinfo(struct student s1);
int main()
{

struct student s1={1234, 9.6, "sumit"};
printinfo(s1);
return 0;
}
void printinfo(struct student s1){
    printf("student information\n");
    printf("roll no.= %d\n cgpa= %f\n name= %s\n", s1.roll, s1.cgpa, s1.name);
}