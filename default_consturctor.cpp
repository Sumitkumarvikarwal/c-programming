#include<iostream>
using namespace std;

class student
{
int rollno;
char name[40];
float fee;
public:
// define consturctor within class 
student()
{
    cout<<"enter the roll no";
    cin>>rollno;
     cout<<"enter the name";
    cin>>name;
     cout<<"enter the fee";
    cin>>fee;
}
void display()
{
    cout<<endl<<rollno<<endl<<name<<endl<<fee<<endl;
}
};
int main()
{
    student s;
    s.display();
    return 0;
}