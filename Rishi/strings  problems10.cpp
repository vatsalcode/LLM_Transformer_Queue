/*
To check whether enntered string is a pananagram or not
panangram is a string which contains all leter of an alphabet
for eg : pack my box with five dozen liqour jugs
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "This is the programme to check pananagram: " << endl
         << endl;
    cout << "Enter the sentence: " << endl;
    getline(cin, s);
    int frequency[26], a = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s.at(j) == i)
            {
                count++;
            }
        }
        frequency[a] = count;
        a++;
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {

        cout << "It is a panangram" << endl;
    }
    else
    {
        cout << "Not a panangram" << endl;
    }

    return 0;
}
