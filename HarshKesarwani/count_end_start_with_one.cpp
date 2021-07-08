#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int t, len;
    cout << "Enter test cases" << endl;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        cout << "Test Case " << test + 1 << endl;
        cout << "Enter length of string" << endl;
        cin >> len;
        cout << "Enter string" << endl;
        cin >> str;
        int count = 0;
        if (len == str.length())
        {
            for (int x = 0; x < len; x++)
            {
                char ch1 = str[x];
                if (ch1 == '1')
                {
                    for (int y = x; y < len; y++)
                    {
                        char ch2 = str[y];
                        if (ch2 == '1')
                        {
                            count++;
                        }
                    }
                }
            }
            cout << "Count : " << count << endl;
        }
        else
        {
            cout << "length and string length does not match " << endl;
            test--;
        }
    }
    return 0;
}
