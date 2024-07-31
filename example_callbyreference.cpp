#include<iostream>
using namespace std;
int modifyvalue(int &x)
{
    x=12;
    cout<<"x is :"<<x<<endl;
}

int main(){
    int a=3;
    modifyvalue(a);
    //a is still same
    cout<<"a is : "<<a;
    return 0;
}