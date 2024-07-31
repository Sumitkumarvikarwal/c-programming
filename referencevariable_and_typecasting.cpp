#include<iostream> 

using namespace std;

int c = 45;

int main(){
    
    //*************Build in Data types****************
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 
    int s= 45;   
    float z= 45.46;
    cout<<"The value of s is "<<(float)s<<endl;
    cout<<"The value of s is "<<float(s)<<endl;

    cout<<"The value of z is "<<(int)z<<endl;
    cout<<"The value of z is "<<int(z)<<endl;
    int n= int(z);

    cout<<"The expression is "<<s + z<<endl;
    cout<<"The expression is "<<s + int(z)<<endl;
    cout<<"The expression is "<<s + (int)z<<endl;


    return 0;
}