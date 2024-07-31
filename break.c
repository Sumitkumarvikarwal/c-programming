#include<stdio.h>
int main()

{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
    if(n%2!=0)
    {
    break;
    }
    printf("%d\n",i);
    }
    printf("thank you");
    return 0;
}