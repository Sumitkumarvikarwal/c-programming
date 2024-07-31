#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("factorial of a number is :%d",factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factN1= factorial(n-1);
    int factN= factN1*n;
    return factN;
}