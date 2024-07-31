#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10-i; j++)
        {
          printf(" ") ; 
        }
        for(c=1; c<=2*i-1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}