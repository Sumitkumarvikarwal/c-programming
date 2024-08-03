#include<iostream>
using namespace std;
int main()
{
    string a=" ";
    string b=" ";
    string c=" ";
    string d=" ";
  
    cout<<"1. Who is the father of C language?a) Steve Jobs. b) James Gosling. c) Dennis Ritchie. d) Rasmus Lerdorf"<<endl;
    cin>>a;
    cout<<"2. Which of the following is not a valid C variable name? a) int number. b) float rate. c) int variable_count. d) int $main"<<endl;
    cin>>b;
    cout<<"3. All keywords in C are in ____ a) LowerCase letters. b) UpperCase letters. c) CamelCase letters. d) None of the mentioned"<<endl;
    cin>>c;
    cout<<"4. Which is valid C expression? a) int my_num = 100,000. b) int my_num = 100000. c) int my num = 1000. d) int $my_num = 10000"<<endl;
    cin>>d;

    if(a=="c")
    {
        cout<<"correct"<<endl;
    }
    else
    {
        cout<<"1.wrong, correct answer is Dennis Ritchie "<<endl;
    }
        if(b=="d")
    {
        cout<<"correct"<<endl;
    }
    else
    {
        cout<<"2.wrong, correct answer is int $main "<<endl;
    }
        if(c=="a")
    {
        cout<<"correct"<<endl;
    }
    else
    {
        cout<<"3.wrong, correct answer is LowerCase letters "<<endl;
    }
        if(d=="b")
    {
        cout<<"correct"<<endl;
    }
    else
    {
        cout<<"4.wrong, correct answer is int my_num = 100000 "<<endl;
    }
    string y[]={a,b,c,d};
    string ans[]={"c","d","a","b"};
    for (int i = 0; i < 4; i++)
    {
        y[i]=ans[i];
    }
    return 0;
}