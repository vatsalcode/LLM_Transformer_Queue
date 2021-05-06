/*
Take a binary string as input ans count no of string starting and end with 1  and print it
*/
#include <string>
#include <iostream>
using namespace std;

int print(string s)
{

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            for (int j = i; j < s.length(); j++)
            {
                if (s.at(j) == '1')
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter binary string: ";
    getline(cin, s);
    cout << "No of such substrings are: " << print(s);
    return 0;
}
