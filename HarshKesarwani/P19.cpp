#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << x;
        }
        for (int y = 1; y <= 9 - x * 2; y++)
        {
            cout << " ";
        }
        for (int y = 1; y <= x; y++)
        {
            if (y != 5)
            {
                cout << x;
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
