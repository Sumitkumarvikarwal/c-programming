#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int aadhar[n];
    int *ptr=&aadhar[0];
    // important note
    // &aadhar[]== *ptr
    for (int i = 0; i <n ; i++)
    {
        printf("%d index: ",i);
        scanf(" %d",  ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d index: %d\n", i, *(ptr+i));
    }
    
return 0;
}