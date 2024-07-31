#include<stdio.h>
void printnumbers(int arr[],int n);
void _printnumbers(int *arr,int n);
int main()
{
   
    int arr[]={5,6,6,9,6,4};
    printnumbers(arr,6);
    _printnumbers(arr,6);
return 0;
}
void printnumbers(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d\n",i,  arr[i]);
    }
    
}
void _printnumbers(int *arr,int n){
     for (int i = 0; i < n; i++)
    {
        printf("%d : %d\n",i,  *(arr+i));
    }
}