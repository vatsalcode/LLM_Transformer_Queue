#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, w, word = "";
    cout << "Enter string" << endl;
    getline(cin, s);
    s = s + "  ";
    cout << "Enter search word to count how many times it is present" << endl;
    cin >> w;
    int c = 0;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(w.begin(), w.end(), w.begin(), ::toupper);
    for (int x = 0; x <= s.length() - 1; x++)
    {
        char ch = s[x];
        if (ch != ' ')
        {
            word = word + ch;
        }
        else
        {
            if (word == w)
            {
                c++;
            }
            word = "";
        }
    }
    cout << c;
    return 0;
}
