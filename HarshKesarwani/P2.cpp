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
        for (int y = x; y >= 1; y--)
        {
            cout << y;
        }
        for (int y = 2; y <= x; y++)
        { 
            cout << y;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
