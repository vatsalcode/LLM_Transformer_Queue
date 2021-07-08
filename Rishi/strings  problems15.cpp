/*
Write a program to check if the two strings entered by user are anagrams or not. Two words are said to be anagrams
if the letters of one word can be rearranged to form the other word. For example, jaxa and ajax are anagrams of
each other.
*/
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    bool anangram = true;
    if (s1.length() != s2.length())
    {
        anangram = false;
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            bool found = false;
            for (int j = 0; j < s1.length(); j++)
            {
                if (s1.at(i) == s2.at(j))
                {
                    found = true;
                    s2.at(j) = ' ';
                    break;
                }
            }
            if (!found)
            {
                anangram = false;
                break;
            }
        }
    }
    if (anangram)
    {
        cout << "Text is anangram";
    }
    else
    {
        cout << "It is not anangram";
    }

    return 0;
}
