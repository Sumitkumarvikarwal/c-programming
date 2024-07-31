#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char name[50];
};
int main()
{
    union student s1;
    s1.id=123;
    s1.marks=100;
    strcpy(s1.name, "sumit");
    printf("the id is : %d\n",s1.id);
    printf("the marks is : %d\n",s1.marks);
    printf("the name is : %s\n",s1.name);
    return 0;
}