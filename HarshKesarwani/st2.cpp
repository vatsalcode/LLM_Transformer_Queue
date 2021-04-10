#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string"<<endl;
    getline(cin, str);
    str = " " + str;
    int l = str.length();
    for (int x = 0; x <= l - 2; x++)
    {
        char c = str[x];
        char c2 = str[x + 1];
        if (c == ' ' && c2 != ' ')
        {
            c = toupper(c2);
        }
        else
        {
            c = tolower(c2);
        }
        cout << c;
    }
}
