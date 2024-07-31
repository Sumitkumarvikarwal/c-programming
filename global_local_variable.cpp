#include<iostream>
using namespace std;
//global variable and local variable can have same name but precidence given to local variable
int glo=6;
int main()
{
    int glo=3;
    // glo=9;
    cout<<"value of varible is :"<<glo;
    return 0;
}
