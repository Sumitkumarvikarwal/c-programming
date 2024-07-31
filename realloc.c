#include<stdio.h>
#include<stdlib.h>
int main()
{
float *ptr;
ptr=(float*)calloc(5,sizeof(float));
printf("enter prices : ");
for(int i=0; i<5; i++)
{
    scanf("%f",&ptr[i]);
}
ptr=realloc(ptr,6);
printf("enter the price(6):");
for(int i=0; i<6; i++)
{
    scanf("%f",&ptr[i]);
}
for(int i=0; i<6; i++)
{
    printf("price is  :%f\n",ptr[i]);
}
return 0;
}