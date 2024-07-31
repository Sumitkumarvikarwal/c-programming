#include<stdio.h>
int main()
{
int i,j,t,a[5];
printf("enter the elements of array");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&a[i]);
}
for ( i = 0; i < 5; i++)
{
for ( j = i+1; j < 5; j++)
{
    if(a[i]>a[j]) {  
        t=a[j];
        a[j]=a[i];
        a[i]=t;
    }
}
}
printf("%d\t",a[i]);
return 0;
}