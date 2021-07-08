//Write a C++ program to change the case (lower to upper and upper to lower cases)
// of each character of a given string.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z')
        {
            s.at(i) = tolower(s.at(i));
        }
        else if (s.at(i) >= 'a' && s.at(i) <= 'z')
        {
            s.at(i) = toupper(s.at(i));
        }
    }
    cout << "Modified Text: " << s << endl;

    return 0;
}
