#include<stdio.h>
int main()
{
    float pi=3.14, r, volume;
    printf("enter the value of r");
    scanf("%f",&r);
    volume= (4*pi*r*r*r)/3;
    printf("volume of sphere is :%f",volume);
    return 0;
}