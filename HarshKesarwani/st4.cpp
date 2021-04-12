#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter string" << endl;
    getline(cin, str);
    int l = str.length();
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int cc = 0;
    for (int x = 0; x <= l - 1; x++)
    {
        char c = str[x];
        if (c == ' ')
        {
            cc++;
        }
    }
    cout << cc;
    return 0;
}
