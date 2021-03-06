#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (char x = 'A'; x <= 'E'; x++)
    {
        for (char y = x; y <= 'D'; y++)
        {
            cout << " ";
        }
        for (char y = 'A'; y <= x; y++)
        {
            cout << x;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
