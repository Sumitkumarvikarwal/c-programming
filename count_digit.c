#include<stdio.h>
int main()
{
    int n, r, count;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        count++;
    }
    printf("count of digit of a number :%d",count);
    
    return 0;
}