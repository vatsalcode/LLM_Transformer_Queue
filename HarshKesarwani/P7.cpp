#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 5; x++)
    {
        for (int y = x; y <= 4; y++)
        {
            cout << " ";
        }
        for (int y = 1; y <= x; y++)
        {
            cout << y;
        }
        for (int y = x - 1; y >= 1; y--)
        {
            cout << y;
        }
        cout << endl;
    }

    for (int x = 4; x >= 1; x--)
    {
        for (int y = x; y <= 4; y++)
        {
            cout << " ";
        }
        for (int y = 1; y <= x; y++)
        {
            cout << y;
        }
        for (int y = x - 1; y >= 1; y--)
        {
            cout << y;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
