//Write a program to check if the word 'orange' is present in the "This is orange juice".
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2, s3;
    cout << "Enter text: ";
    getline(cin, s1);
    cout << "Enter word to find: ";
    getline(cin, s2);
    bool flag = false;
    for (int i = 0; i < s1.length(); i++)
    {
        s3 = s1.substr(i, s2.length());
        if (s3 == s2)
        {
            flag = true;
            cout << "Yes it has same word and at the index " << i << endl;
        }
    }
    if (flag == false)
    {
        cout << "No such word in entered text." << endl;
    }

    return 0;
}
