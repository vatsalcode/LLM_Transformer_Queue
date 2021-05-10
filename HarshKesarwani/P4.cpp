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
        for (int y = x; y <= 5; y++)
        {
            cout << y;
        }
        for (int y = 4; y >= x; y--)
        {
            cout << y;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
