#include<stdio.h>
int main()
{
int a, b, c;
printf("enter the value of a, b ");
scanf("%d%d",&a, &b);
printf("before swipe a is :and b is :%d \n%d \n ",a, b);
c=a;
a=b;
b=c;
printf("after swipe a is :and b is :%d \n%d \n",a, b);

    return 0;

}