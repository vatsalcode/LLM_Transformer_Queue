// camel case
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
