#include<stdio.h>
#include<string.h>
int main()
{
    char newstr[]= " hello";
    char oldstr[]= "world";
    strcat(newstr, oldstr);
    puts(newstr);
return 0;
}