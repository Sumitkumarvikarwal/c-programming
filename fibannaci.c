#include<stdio.h>
int main()
{
    int t1=0, t2=1, n, i, temp;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d %d\t",t1,t2);
    for(i=1; i<=n; i++)
    {
        temp= t1+t2;
        t1=t2;
        t2=temp;
        printf("%d\t",temp);
    }
    return 0;
    
}