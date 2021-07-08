//Write a program to delete all consonents from the string "Hello, have a good day".
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s2;
    cout << "Enter text: ";
    getline(cin, s);
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) >= 'a' && s.at(i) <= 'z') || (s.at(i) >= 'A' && s.at(i) <= 'Z'))
        {
            if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'A' || s.at(i) == 'E' || s.at(i) == 'I' || s.at(i) == 'O' || s.at(i) == 'u')
            {
                cout << s.at(i);
            }
        }
        else
        {
            cout << s.at(i);
        }
    }

    return 0;
}
