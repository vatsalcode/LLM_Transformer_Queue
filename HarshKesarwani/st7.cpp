#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "enter string " << endl;
    getline(cin, s);
    int l = s.length();
    for (int x = l - 1; x >= 0; x--)
    {
        string a = s.substr(x);
        cout<<a<<endl;
    }
    return 0;
}
