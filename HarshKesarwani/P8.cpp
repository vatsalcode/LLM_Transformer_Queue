#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 3; x <= 7; x++)
    {
        for (int y = x; y <= 6; y++)
        {
            cout << " ";
        }
        for (int y = 3; y <= x; y++)
        {
            cout << y;
        }
        for (int y = x - 1; y >= 3; y--)
        {
            cout << y;
        }
        cout << endl;
    }

    for (int x = 6; x >= 3; x--)
    {
        for (int y = x; y <= 6; y++)
        {
            cout << " ";
        }
        for (int y = 3; y <= x; y++)
        {
            cout << y;
        }
        for (int y = x - 1; y >= 3; y--)
        {
            cout << y;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
