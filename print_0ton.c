#include<stdio.h>
int main()
// by for loop
{
    int n, i=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}