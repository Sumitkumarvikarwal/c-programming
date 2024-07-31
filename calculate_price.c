#include<stdio.h>
 void calculateprice(float value);
 int main()
 {
    float value;
    printf("enter the value");
    scanf("%f",&value);
    calculateprice(value);
    printf("the price is :%f\n",value);
    return 0;
 }
 void calculateprice(float value)
 {
     value= value + (0.18*value);
    printf("the final price is :%f\n",value);
 }
 