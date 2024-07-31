    #include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    b=a%10;
    printf("last digit of a number is :%d\n",b);
    while (a>=10)
    {
    a=a/10;
    }
    printf("first digit of a number is :%d\n",a);
     
    return 0;
}
