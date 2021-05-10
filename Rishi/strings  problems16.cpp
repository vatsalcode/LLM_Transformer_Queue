/*
Write a program to replace a given substring in a sentence with another string. For example, in the sentence, ”
 A batman with bat” if we replace ”bat” with ”snow”, the new sentence should be printed as ”A snowman with snow”.
*/
//It also teaches us use of replace function;
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2, s3;
    cout << "Enter text: ";
    getline(cin, s1);
    cout << "Enter word to be replaced: ";
    getline(cin, s2);
    int a = s2.length();
    cout << "Enter word to be added: ";
    getline(cin, s3);
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.substr(i, a) == s2)
        {
            count++;
        }
    }
    int arr[count], j = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.substr(i, a) == s2)
        {
            arr[j] = i;
            j++;
        }
    }
    for (int i = count - 1; i >= 0; i--)
    {
        s1.replace(arr[i], a, s3);
    }

    cout << s1;
    return 0;
}
