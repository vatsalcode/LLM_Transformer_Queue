// given a string and a pattern and we have to calculate how many times that pattern ocuur in string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter text: ";
    getline(cin, s1);
    cout << "Enter pattern: ";
    getline(cin, s2);
    int count = 0;
    for (int i = 0; i < s1.length() - s2.length(); i++)
    {
        if (s1.substr(i,s2.length())==s2)
        {
            count++;
        }
    }
    cout << "No of occurences of pattern " << s2 << " is: " << count;

    return 0;
}
