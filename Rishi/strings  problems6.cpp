/*
Write a program that takes your full name as input and displays the abbreviations of the first and middle names 
except the last name which is displayed as it is. For example, if your name is Robert Brett Roser, then the output
should be R.B.Roser.
*/
#include <iostream>
using namespace std;
int main()
{
    string s1;
    cout << "Enter your Name: ";
    getline(cin, s1);
    int j, k;
    for (int i = s1.length() - 1; i > 0; i--)
    {
        if (s1.at(i) == ' ')
        {
            j = i;
            break;
        }
    }
    for (int i = 0; i < s1.length() - 1; i++)
    {
        if (s1.at(i) == ' ')
        {
            k = i;
            break;
        }
    }

    cout << s1.at(0) << "." << s1.at(k + 1) << "." << s1.substr(j + 1) << endl;

    return 0;
}
