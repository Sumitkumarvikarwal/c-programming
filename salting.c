#include<stdio.h>
#include<string.h>
void salting ( char password[]);
int main()
{
   char password[100];
   printf("enter your password");
    scanf("%s",password);
    salting(password);

return 0;
}

void salting ( char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass, password);
    strcat(newpass, salt);
    puts(newpass);
}