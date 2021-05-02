/*
Write the string after the first occurrence of ','
and the string after the last occurrence of ',' in the string "Hello, Good, Morning".
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter Text: ";
    getline(cin, s);
    int first_occurence, second_occurence;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ',')
        {
            first_occurence = i;
            break;
        }
    }
    for (int i = s.length() - 1; i > 0; i--)
    {
        if (s.at(i) == ',')
        {
            second_occurence = i;
            break;
        }
    }
    cout << s.substr(first_occurence + 1) << endl;
    cout << s.substr(second_occurence + 1) << endl;

    return 0;
}
