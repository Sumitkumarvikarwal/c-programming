#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int aadhar[n];
    for (int i = 0; i <n ; i++)
    {
        printf("%d index: ",i);
        scanf(" %d",  &aadhar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d index: %d\n", i, aadhar[i]);
    }
    
return 0;
}