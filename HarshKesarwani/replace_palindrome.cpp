#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

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
    int ll = str.find(" ");
    string ll1 = str.substr(0, ll);
    string ll2 = str.substr(ll + 1);
    int length = stoi(ll1);
    int op = stoi(ll2);
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if (s.length() == length)
    {
        string arr[op];
        cout << "Enter operations (separated by space) : " << endl;

        // int op1 = op;
        // cin.ignore();
        // while (op1 != 0)
        // {
        //     int i = 0;
        //     getline(cin, arr[i]);
        //     i++;
        //     op1--;
        // }

        // or

        cin.ignore();
        for (int x = 0; x < op; x++)
        {
            getline(cin, arr[x]);
        }

        for (int x = 0; x < op; x++)
        {
            string copy_arr = arr[x];
            char c = copy_arr[0];
            if (c == '1')
            {
                string from_one_index=copy_arr.substr(2);
                int index_space=from_one_index.find(" ");
                string start=from_one_index.substr(0,index_space);
                string end=from_one_index.substr(index_space+1);
                int pos = stoi(start);
                transform(end.begin(), end.end(), end.begin(), ::toupper);
                s.replace(pos - 1, 1, end);
            }

            else
            {
                string from_one_index=copy_arr.substr(2);
                int index_space=from_one_index.find(" ");
                string start=from_one_index.substr(0,index_space);
                string end=from_one_index.substr(index_space+1);
                int pos1 = stoi(start);
                int pos2 = stoi(end);
                string sub = s.substr(pos1 - 1, pos2 - pos1 + 1);
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
