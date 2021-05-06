#include <iostream>
#include <fstream>
using namespace std;

/*
Useful classes for working with files in c++ are-
1. fstreambase
2. ifstream  --->derived from fstreambase class
3. ofstream  --->derived from fstreambase class
*/

int main()
{ 
    string st = "rishi";
    string st2;
    //opening files using constructor and writing it
    ofstream out("sample 22.txt"); //It will write operation
    out << st;

    //opening files using constructor and reading it
    ifstream in("sample 22b.txt"); // it will read operation
    //in >> st2;
    getline(in, st2);
    cout << st2;

    return 0;
}
