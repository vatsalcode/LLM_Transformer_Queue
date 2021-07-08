#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    for (int x = 9; x >= 5; x--)
    {
        for (int y = x; y >= 6; y--)
        {
            cout << " ";
        }
        for (int y = x; y <= 9; y++)
        {
            cout << y;
        }
        for (int y = 8; y >= x; y--)
        {
            cout << y;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
