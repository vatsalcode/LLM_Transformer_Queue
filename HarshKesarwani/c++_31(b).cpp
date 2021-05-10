#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="harsh";
    string st2;
    // opening files using constrctor and reading it
    ifstream in("sample76.txt");  //read operation
    // in>>st2;  will only read one word
    getline(in,st2); //this will print whole line
    cout<<st2<<endl;
    return 0;
}
