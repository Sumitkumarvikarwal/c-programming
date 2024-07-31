#include<iostream>
using namespace std;

int main(){
    int n,t,i;
    cout<<"enter the number whose table to be print\n";
    cin>>n;
    for ( i = 1; i <=10; i++)
    {
        t=n*i;
        cout<<n<<"*"<<i<<"="<<t<<endl;
    }
    
    return 0;
}