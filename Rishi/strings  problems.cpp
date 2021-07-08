//Write a program to print every character of a string entered by user in a new line using loop
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter text: ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << endl;
    }

    return 0;
}
