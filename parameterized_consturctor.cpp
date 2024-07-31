#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int rollno;
    char name[40];
    float fee;
    public:
    //parameterized consturctor
    student(int no, const char *n,float f)
    {
        rollno=no;
        strcpy(name, n);
        fee=f;
    }
    void display()
{
    cout<<endl<<rollno<<endl<<name<<endl<<fee<<endl;
}
};

int main(){
    student s(1001, "sumit",34000);
    s.display();
    return 0;
}