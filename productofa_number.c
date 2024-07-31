#include<stdio.h>
 int product(int x, int y);
 int main()
 {
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a, &b);
    printf("product of  numbers is :%d\n",product(a,b));
    return 0;
 }
 int product(int x, int y)
 {
    return x*y;
 }
 //a,b --> actual parameters or arguments
 //x,y --> formal parameters