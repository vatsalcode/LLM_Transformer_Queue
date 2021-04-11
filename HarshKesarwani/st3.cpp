#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string" << endl;
    getline(cin, str);
    str = " " + str;
    int l = str.length();
    string w = "";
    for (int x = l - 1; x >= 0; x--)
    {
        char ch = str[x];
        if (ch != ' ')
        {
            w = ch + w;
        }
        else
        {
            cout << (w + ch);
            w = "";
        }
    }
    return 0;
}
