/*
Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only
 one space
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    s.at(0) = toupper(s.at(0));
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == ' ')
        {
            s.at(i + 1) = toupper(s.at(i + 1));
        }
    }
    cout << "New text is: " << s;

    return 0;
}
