#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 5; x >= 1; x--)
    {
        for (int y = x; y >= 2; y--)
        {
            cout << " ";
        }
        for (int y = 5; y >= x; y--)
        {
            cout << y;
        }
        for (int y = x + 1; y <= 5; y++)
        {
            cout << y;
        }
        cout << endl;
    }

    for (int x = 2; x <= 5; x++)
    {
        for (int y = x; y >= 2; y--)
        {
            cout << " ";
        }
        for (int y = 5; y >= x; y--)
        {
            cout << y;
        }
        for (int y = x + 1; y <= 5; y++)
        {
            cout << y;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
