//Write a program to reverse a string with and without using any predefined function.
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    for (int i = 0; i < s.length() / 2; i++)
    {
        char temp = s.at(i);
        s.at(i) = s.at(s.length() - 1 - i);
        s.at(s.length() - 1 - i) = temp;
    }
    cout<<s;

    return 0;
}
