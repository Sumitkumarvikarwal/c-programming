#include<stdio.h>
int main()
{
    int n, arm=0, c,r;
    printf("enter the number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm= (r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    {
        printf("number is armstrong number");
    }
    else
    {
        printf("number is not armstrong number");
    }
    return 0;
}