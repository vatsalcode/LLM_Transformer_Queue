#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    string s = "";
    for (int x = n; x != 0; x = x / 2)
    {
        int r = x % 2;
        string str=to_string(r);
        s = str + s;
    }
    cout<<"Binary number is "<<s;
    return 0;
}
