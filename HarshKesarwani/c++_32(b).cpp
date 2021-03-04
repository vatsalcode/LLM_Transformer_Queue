#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample78.txt");
    out<<"This is me ";
    out<<"Also";
    out<<"\n you";
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample78.txt");
    // in>>st>>st2;
    // cout<<st<<st2<<endl;

    //or 

    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }

    in.close();

    
    return 0;
}
