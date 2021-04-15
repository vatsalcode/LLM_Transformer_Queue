//Write a program to find the length of a string without using predefined functions.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    int j = 0;
    //S.at will not work here
    for (int i = 0; s[i] != '\0'; i++)
    {
        j++;
       
    }
    cout << "Length is: " << j << endl;
    return 0;
}
