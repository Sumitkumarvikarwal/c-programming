#include<iostream>
using namespace std;
 
 class person
 {
  int age;
  public:
  // constructor without arugument
  person()
  {
    age=20;
  }
  // constructor with arugument
  person(int k)
  {
    age=k;
  }
  int getage()
  {
    return age;
  }
 };

int main(){
    person p1;
    cout<<"person 1 age is :"<<p1.getage()<<endl;
    person p2(5);
    cout<<"person 2 age is :"<<p2.getage()<<endl;
    return 0;
}