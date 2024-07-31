#include<iostream>
using namespace std;
 
 class base1
 {
    protected:
    int data1;
    public:
    void setdata1(int a)
    {
        data1=a;
    }
 };
  
 class base2
 {
    protected:
    int data2;
    public:
    void setdata2(int a)
    {
        data2=a;
    }
 };
 /*
 syntax of multiple inheritance:
 class (derived_class_name): visibility_mode base_class1_name , visibility_mode base_class_name
 {
 body.......
 }

 */
 class derived: public base1, public base2
 {
    public:
    void show()
    {
        cout<<"data1 is :"<<data1<<endl;
        cout<<"data2 is :"<<data2<<endl;
        cout<<"sum is :"<<data1 + data2<<endl;

    }
 };
 int main()
 {
    derived sumit;
    sumit.setdata1(20);
    sumit.setdata2(40);
    sumit.show();
    return 0;
 }