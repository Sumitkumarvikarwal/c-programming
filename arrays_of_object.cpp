#include<iostream>
using namespace std;

class employee
 {
int id;
public:
void setid()
{
cout<<"enter the id of employee"<<endl;
cin>>id;

}
void getid()
{
    cout<<"id of employee is :"<<id<<endl;
}
};
int main()
{
    employee insta[4];
    for (int i = 0; i < 4; i++)
    {
        insta[i].setid();
        insta[i].getid();
    }
    return 0;
}