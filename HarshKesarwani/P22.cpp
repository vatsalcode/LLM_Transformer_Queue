#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 5; y >= x; y--)
        {
            cout << y;
        }
        for (int y = 2; y <= x; y++)
        {
            cout << x;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
