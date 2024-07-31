#include<stdio.h>
int main()
{
FILE *fptr;
char ch[5]="sumit";
fptr=fopen("text.txt","w");
fprintf(fptr,"%s",ch);
fclose(fptr);
return 0;
}