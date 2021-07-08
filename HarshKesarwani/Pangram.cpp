#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter string to check if PANGRAM EXISTS" << endl;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    int count = 0;
    for (char x = 'A'; x <= 'Z'; x++)
    {
        for (int y = 0; y < str.length(); y++)
        {
            char c = str[y];
            if (c == x && c != ' ')
            {
                count++;
                break;
            }
        }
    }

    if (count == 26)
    {
        cout << "PANGRAM EXSITS";
    }
    else
    {
        cout << "PANGRAM DOESN'T EXSITS";
    }
    return 0;
}
