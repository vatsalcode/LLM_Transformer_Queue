//Write a program to compare if the two strings entered by user are equal or not without
//using predefined String functions.
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    getline(cin, s1);
    cout << "Enter string 2: ";
    getline(cin, s2);
    bool flag = true;
    if (s1.length() != s2.length())
    {
        flag = false;
    }
    else if (flag)
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1.at(i) != s2.at(i))
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Equal strings" << endl;
    }
    else
    {
        cout << "Unequal strings" << endl;
    }

    return 0;
}
