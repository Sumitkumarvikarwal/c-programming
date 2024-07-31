#include<stdio.h>
int main()
{
    int n, pal=0, c,r;
    printf("enter the number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        pal=(pal*10)+r ;
        n=n/10;
    }
    if(c==pal)
    {
        printf("number is palindrome number");
    }
    else
    {
        printf("number is not palindrome number");
    }
    return 0;
}