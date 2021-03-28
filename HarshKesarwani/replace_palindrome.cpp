#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string words_without_space(string str)
{
    string word = "";
    for (int x = 0; x < str.length(); x++)
    {
        char c = str[x];
        if (c != ' ')
        {
            word = word + c;
        }
    }
    return word;
}

bool isPalindrone(string str)
{
    int len = str.length();
    string rev = "";
    for (int x = 0; x < len; x++)
    {
        char ch = str[x];
        string r(1, ch);
        rev = r + rev;
    }
    for (int x = 0; x < len; x++)
    {
        char ch1 = str[x];
        char ch2 = rev[x];
        // string c1(1,ch1);
        // string c2(1,ch2)
        if (ch1 != ch2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter length of string and number of operations (seperated space)" << endl;
    getline(cin, str);
    string l_m = words_without_space(str);
    int length = l_m[0] - '0';
    int op = l_m[1] - '0';
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if (s.length() == length)
    {
        string arr[op];
        cout << "Enter operations (separated by space) : " << endl;
        cin.ignore();
        for (int x = 0; x < op; x++)
        {
            getline(cin, arr[x]);
        }

        for (int x = 0; x < op; x++)
        {
            arr[x] = words_without_space(arr[x]);
        }

        for (int x = 0; x < op; x++)
        {
            string copy_arr = arr[x];
            char c = copy_arr[0];
            if (c == '1')
            {
                int pos = copy_arr[1] - '0';
                char character = copy_arr[2];
                string ch(1, character);
                transform(ch.begin(), ch.end(), ch.begin(), ::toupper);
                s.replace(pos - 1, 1, ch);
            }

            else
            {
                int pos1 = copy_arr[1] - '0';
                char p2 = copy_arr[2];
                string p2_copy(1, p2);
                int pos2 = stoi(p2_copy);
                string sub = s.substr(pos1 - 1, pos2 - 2);
                if (isPalindrone(sub))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    else
    {
        cout << "String length and length does not match";
    }
    return 0;
}
