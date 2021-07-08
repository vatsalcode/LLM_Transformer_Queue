#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 9; x >= 4; x--)
    {
        for (int y = x; y >= 5; y--)
        {
            cout << " ";
        }
        for (int y = 9; y >= x; y--)
        {
            cout << y;
        }
        for (int y = x + 1; y <= 9; y++)
        {
            cout << y;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
