/*
Write a C++ program to change every letter in a given string with the letter following it in the alphabet 
(ie. a becomes b, p becomes q, z becomes a).
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        char c = s.at(i);
        if (c == 'z')
        {
            c = 'a';
        }
        else if (c == 'z')
        {
            c = 'A';
        }
        else
        {
            c++;
        }
        s.at(i) = c;
    }
    cout << "New string is: " << s;
    return 0;
}
