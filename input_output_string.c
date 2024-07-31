#include<stdio.h>

int main()
{


// scanf() cannot input multi word string with space
// so we use fgets() for input string and puts() for output
// char fullname[40];
// printf("enter full name:");
// scanf("%s",fullname);
// printf("your full name is %s\n",fullname);

//fgets and puts
char fullname[40];
printf("enter full name:");
fgets(fullname, 40, stdin);
printf("your full name is \t");
puts(fullname);

char firstname[40];
printf("enter first name:");
scanf("%s",firstname);
printf("your first name is %s\n",firstname);
return 0;
}