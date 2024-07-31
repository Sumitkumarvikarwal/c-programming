#include<stdio.h>
int main()
{
int age=22;
int *ptr=&age;
int _age=22;
int *_ptr=&_age;
// pointer increament and decreament
printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
ptr--;
printf("%u\n",ptr);
// subraction of pointer 
ptr= ptr- _ptr;
printf("difference : %u\n",ptr);
// comparsion of pointers
ptr= &_age;
printf("%u\n",ptr== _ptr);
return 0;
}