#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("person is adult");

    }
    else if(age>12 && age<18)
    {
        printf("person is teenager");
    }
    else 
    {
        printf("person is child");
    }
    getch();

}