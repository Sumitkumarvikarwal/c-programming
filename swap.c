#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
int x=2, y=3;
// call by value
swap(x,y);
printf("x=%d and y=%d\n",x,y);
_swap(&x,&y);
printf("x=%d and y=%d\n",x,y);
return 0;
}
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
}
void _swap(int *a, int *b){
     int t=*a;
    *a=*b;
    *b=t;
}