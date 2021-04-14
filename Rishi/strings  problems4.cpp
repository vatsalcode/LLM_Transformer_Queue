//Write a program to find the first and the last occurence of the letter 'o' and character ',' in "Hello, World".
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter Text: ";
    getline(cin, s);
    char search;
    cout << "Enter word: ";
    cin >> search;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == search)
        {
            cout << "The first position is: " << i << endl;
            ;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s.at(i) == search)
        {
            cout << "The last position is: " << i << endl;
            break;
        }
    }

    return 0;
}
