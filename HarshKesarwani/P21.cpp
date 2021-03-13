#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 5; x >= 1; x--)
    {
        for (int y = x; y <= 5; y++)
        {
            cout << y;
        }
        for (int y = 1; y <= x * 2 - 3; y++)
        {
            cout << " ";
        }
        for (int y = 5; y >= x; y--)
        {
            if (!(x == 1 && y == 5))
            {
                cout << y;
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
