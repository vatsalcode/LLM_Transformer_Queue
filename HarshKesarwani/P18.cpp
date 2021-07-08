#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 5; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << ((char)(y + 64));
        }
        for (int y = 1; y <= 9 - x * 2; y++)
        {
            cout << " ";
        }
        for (int y = x; y >= 1; y--)
        {
            if (y == 5)
            {
                continue;
            }
            cout << ((char)(y + 64));
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
