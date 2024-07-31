#include<stdio.h>
int main()
{
int marks[3];
 printf("enter the marks\n");
// printf("chemistry:  ");
// scanf("%d",&marks[0]);
// printf("physics: ");
// scanf("%d",&marks[1]);
// printf("math:  ");
// scanf("%d",&marks[2]);
// OR we can scan like that also
scanf("%d %d %d",&marks[0], &marks[1], &marks[2]);
printf("chemistry= %d, physics= %d, math= %d\n", marks[0], marks[1], marks[2]);
return 0;
}