#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter string to check if anagram or not" << endl;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    int fre_even = 0;
    int fre_odd = 0;
    int fre_one = 0;
    int q = 0;
    for (char x = 'A'; x <= 'Z'; x++)
    {
        int count = 0;
        for (int y = 0; y < str.length(); y++)
        {
            char c = str[y];
            if (c == x)
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            if (count == 1)
            {
                fre_one++;
            }
            else
            {
                fre_odd++;
            }
        }
        else if (count % 2 == 0 && count!=0)
        {
            fre_even++;
        }
        else
        {
            continue;
        }
    }

    if (fre_one > 1 || fre_odd > 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
