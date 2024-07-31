#include<iostream>
using namespace std;

class baseclass
{
    public:
    int var_base=1;
    virtual void display()
    {
        cout<<"display the base class variable value:"<<var_base<<endl;
    }
};

class derivedclass : public baseclass
{
    public:
    int var_derived=1;
    void display()
    {
        cout<<"display the derived class variable value:"<<var_derived<<endl;
    }
};
int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass *derived_class_pointer;
    derivedclass obj_derived;
    base_class_pointer= &obj_derived;
    base_class_pointer->display();
    return 0;
}