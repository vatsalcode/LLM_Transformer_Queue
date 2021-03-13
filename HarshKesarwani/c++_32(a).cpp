#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream hout("sample77.txt");

    // counting a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter name"<<endl;
    cin>>name;

    // writing a string to the file
    hout<<"My name is " + name;

    hout.close();

    ifstream hin("sample77.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is : "<<content<<endl;
    hin.close();
    return 0;
}
