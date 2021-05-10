#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string" << endl;
    getline(cin, str);
    str = str + "  ";
    string big = "";
    string word = "";
    for (int x = 0; x <= str.length() - 1; x++)
    {
        char ch = str[x];
        if (ch != ' ')
        {
            word = word + ch;
        }
        else
        {
            if (word.length() > big.length())
            {
                big = word;
            }
            word = "";
        }
    }
    cout << "Longest is " << big;
}
