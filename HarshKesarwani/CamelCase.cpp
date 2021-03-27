#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    string str;
    cout << "Enter string in CamelCase" << endl;
    getline(cin, str);
    string copy = str;
    str[0] = toupper(str[0]);
    vector<int> v;
    int count = 0;
    for (int x = 0; x < str.length(); x++)
    {
        if (isupper(str[x]))
        {
            count++;
            v.push_back(x);
        }
    }

    int i = 0;
    for (int x = 0; x < v.size(); x++)
    {
        int start = v[i];
        int end = v[i + 1];
        i++;
        cout << copy.substr(start, end - start) << endl;
    }
    cout << count;
    return 0;
}
