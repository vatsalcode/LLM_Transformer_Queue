#include <iostream>
#include <string>
using namespace std;

string duplicate(string str, string ans, char c1, int i)
{
    if (str.length() == i)
    {
        return ans;
    }
    else
    {
        char c2 = str[i];
        if (c1 != c2)
        {
            ans = ans + c2;
            i++;
            return duplicate(str, ans, c2, i);
        }

        else
        {
            char c2 = str[i];
            i++;
            return duplicate(str, ans, c2, i);
        }
    }
}

int main()
{
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    int i = 1;
    string ans = "";
    char c = str[0];
    string a = duplicate(str, ans, c, i);
    cout << c + a;
    return 0;
}
