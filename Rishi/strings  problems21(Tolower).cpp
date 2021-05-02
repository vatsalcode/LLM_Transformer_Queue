/*
Write a C++ program to lowercase all capital letter  a given string exceept first character of first word
to make a text gramatically correct
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
    for (int i = 1; i < s.length(); i++)
    {
        if (s.at(i) == ' ')
        {
            s.at(i + 1) = toupper(s.at(i + 1));
           i++;
        }

        else
        {
            s.at(i) = tolower(s.at(i));
        }
    }
    cout << "New text is: " << s;

    return 0;
}
