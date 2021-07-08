#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s1 = s.substr(8, 2);
    if (s1 == "PM")
    {
        string s2 = s.substr(0, 2);
        int a = stoi(s2);
        a = a + 12;
        string s3 = to_string(a);
        s.replace(0, 2, s3);
        cout << s;
    }
    else if (s1 == "AM")
    {
        if (s.substr(0, 2) == "12")
        {
            s.replace(0, 2, "00");
        }
        cout << s;
    }
}
