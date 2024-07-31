#include<stdio.h>
int main()
{
FILE *fptr;
 char ch;
 fptr=fopen("text.txt","r");
 if(fptr==NULL)
 {
    printf("doesn't exist!\n");
 }
 else
 {
    fscanf(fptr,"%c",&ch);
    printf("character in file is :%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character in file is :%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character in file is :%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character in file is :%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character in file is :%c\n",ch);
    fclose(fptr);
 }
return 0;
}