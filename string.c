#include<stdio.h>
int main()
{
// declaration of string
char name[]={'s','u','m','i','t','\0'};
 char course[]={'a','p','n','a','\0'};

// printing string simple
for (char i=0; name[i]!='\0'; i++)
{
    printf("%c",name[i]);
}
printf("\n");

// printing string using pointer
for (char *ptr = name; *ptr!='\0'; ptr++)
{
    printf("%c",*ptr);
}
printf("\n");
// printing string using specifier
printf("%s\n ",course);

return 0;
}