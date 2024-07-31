#include<iostream>
using namespace std;

int main(){
        // Pointer to pointer
        int a=2;
        int* b=&a;
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address b using pointer c) is "<<**c<<endl; 
    return 0;
}