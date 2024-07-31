#include<stdio.h>
int main()
{
    int n,i=1,j,t;
    while(i<=20)
    {
        j=1;
        n=i;
        while(j<=10)
        {
            t=n*j;
            printf("%d*%d=%d\n",n,j,t);
            j++;
        }
        i++;
        printf("\t");
    }
    return 0;
}