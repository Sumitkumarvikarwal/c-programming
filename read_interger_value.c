#include<stdio.h>
int main()
{
FILE *fptr;
 int ch;
 fptr=fopen("newtext.txt","r");
 if(fptr==NULL)
 {
    printf("doesn't exist!\n");
 }
 else
 {
    fscanf(fptr,"%d",&ch);
    printf("character in file is :%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character in file is :%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character in file is :%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character in file is :%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character in file is :%d\n",ch);
    fclose(fptr);
 }
return 0;
}