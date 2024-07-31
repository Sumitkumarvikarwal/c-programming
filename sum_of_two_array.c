#include<stdio.h>
int main()
{
int n;
printf("enter the size of array");
scanf("%d",&n);
int a[n],b[n],i,c[n];
printf("enter the elements of 1st array\n");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("enter the elements of 2st array\n");
for ( i = 0; i < n; i++)
{
    scanf("%d",&b[i]);
}
printf("sum is :");
for ( i = 0; i < n; i++)
{
    c[i]=a[i]+b[i];
    printf("%d\n",c[i]);
}

return 0;
}