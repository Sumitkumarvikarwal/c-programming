#include<stdio.h>
int main()
{
int age= 10;
int *ptr=&age;
int **pptr=&ptr;
printf("%d\n",**pptr);
printf("%d\n",*pptr);
printf("%d\n",pptr);

return 0;
}