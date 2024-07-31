#include<iostream>
#include<fstream>

using namespace std;
/*
These are some useful classes for working with files in C++

1.fstreambase
2.ifstream --> derived from fstreambase and it is for read a file
3.ofstream --> derived from fstreambase and it is for write in a file

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1.Using the constructor
2.Using the member function open() of the class
*/
int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample2.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    getline(in, st2);  
    cout<<st2;
    in.close();
    return 0;
}
