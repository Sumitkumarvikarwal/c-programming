#include<stdio.h>
int main()
{
FILE *fptr;
char ch=100;
fptr=fopen("text.txt","w");
fprintf(fptr,"%d",ch);
fclose(fptr);
return 0;
}