#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    string s[n];
    cout << "Enter string" << endl;
    cin.ignore();
    for (int x = 0; x < n; x++)
    {
        getline(cin, s[x]);
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y <= n - 1 - x; y++)
        {
            if (s[y].length() > s[y + 1].length())
            {
                string t = s[y];
                s[y] = s[y + 1];
                s[y + 1] = t;
            }
        }
    }
    cout << "Increasing order" << endl;
    for (int x = 0; x < n; x++)
    {
        cout << (s[x]) << endl;
    }
    return 0;
}
