#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="harsh";
    // opening files using constrctor and writing it
    ofstream out("sample75.txt");  //write operation
    out<<st;
    return 0;
}
