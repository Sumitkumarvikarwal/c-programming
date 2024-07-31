#include<iostream>
using namespace std;
int volume(int r, int h)
{
    return (3.14*r*r*h);
}
int volume(int s)
{
    return (s*s*s);
}
int main(){
    cout<<"the volume of cylinder is :"<<volume(2,3)<<endl;
    cout<<"the volume of cube is :"<<volume(3)<<endl;
    return 0;
}