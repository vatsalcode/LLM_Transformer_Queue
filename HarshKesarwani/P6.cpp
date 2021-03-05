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
        for (int y = 9; y >= x; y--)
        {
            cout << x;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
