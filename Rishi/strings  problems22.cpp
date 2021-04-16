// Check whether two characters present equally in a given string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    char ch1, ch2;
    cout << "Enter character 1: ";
    cin >> ch1;
    cout << "Enter character 2: ";
    cin >> ch2;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ch1)
        {
            count1++;
        }
        if (s.at(i) == ch2)
        {
            count2++;
        }
    }
    if (count1 == count2)
    {
        cout << "Equal occurence";
    }
    else
    {
        cout << "Unequal occurence";
    }

    return 0;
}
