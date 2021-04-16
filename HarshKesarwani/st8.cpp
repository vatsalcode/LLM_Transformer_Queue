#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter string" << endl;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int l = s.length();
    for (char x = 'A'; x <= 'Z'; x++)
    {
        int c = 0;
        for (int y = 0; y <= l - 1; y++)
        {
            if (s[y] == x)
            {
                c++;
            }
        }
        if (c > 0)
        {
            cout << x << "\t" << c<<endl;
        }
    }
    return 0;
}
