#include <iostream>
#include <string>
using namespace std;

string reverse(string str, string rev, int start, int end)
{
    if (end < str.length())
    {
        if (str[end] != ' ')
        {
            end = end + 1;
            return reverse(str, rev, start, end);
        }

        else
        {
            rev = str.substr(start, end - start) + " " + rev;
            end = end + 1;
            start = end;
            return reverse(str, rev, start, end);
        }
    }

    else
    {
        rev = str.substr(start, end - start) + " " + rev;
        return rev;
    }
}

int main()
{
    string str;
    cout << "Enter string" << endl;
    getline(cin, str);
    cout << reverse(str, "", 0, 0);
    return 0;
}
