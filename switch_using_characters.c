#include<stdio.h>
#include<conio.h>
void main()
{
    char day_code;
    printf("enter the day_code");
    scanf("%c",&day_code);
    switch(day_code)
    {
        case 'm' : printf("monday\n");
        break;
         case 't' : printf("tuesday\n");
        break;
         case 'w' : printf("wednesday\n");
        break;
         case 'T' : printf("thursday\n");
        break;
         case 'f' : printf("friday\n");
        break;
         case 's' : printf("saturday\n");
        break;
         case 'S' : printf("sunday\n");
        break;
        default : printf("not valid day");

    }

    getch();

}