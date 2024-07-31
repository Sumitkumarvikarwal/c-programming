#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
ptr=(int*)malloc(5*sizeof(int));
printf("enter numbers: ");
for(int i=0; i<5; i++)
{
    scanf("%d",&ptr[i]);
}
for(int i=0; i<5; i++)
{
    printf("numbers are :%d\n",ptr[i]);
}
free(ptr);
for (int i = 0; i < 2; i++)
{
    printf("%d\n",ptr[i]);
}

return 0;
}