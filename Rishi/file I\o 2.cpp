#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //Connecting our files with ofstream
    ofstream out("sample 22.txt");

    //Creating a string and filling it with the string entered by user
    cout << "Enter your name " << endl;
    string name;

    //writing the string to the file
    out << name + " is my name  ";

    //Link between our programme and the sample file is broken
    out.close();

    ifstream in("sample 22.txt");
    string content;
    getline(in, content);
    cout << "The content of file is :" << content;
    in.close();
    return 0;
}
