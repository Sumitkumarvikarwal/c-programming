#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "sumit chaudhary";
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation
    out<<st;
    out.close();
    return 0;
}
