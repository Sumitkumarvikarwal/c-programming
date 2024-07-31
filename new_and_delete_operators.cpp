#include<iostream>
using namespace std;

int main(){
    
    float *p = new float(40.78);// new operator for allocated dynamically memory
    cout << "The value at address p is " << *(p) << endl;
    
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;// written as: *(arr+1)=20
    arr[2] = 30;
    delete[] arr;// delete operator for free dynamically allocated memory
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
