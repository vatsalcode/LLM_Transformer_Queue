#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 65; x <= 69; x++)
    {
        for (int y = x; y <= 68; y++)
        {
            cout << " ";
        }
        for (int y = 65; y <= x; y++)
        {
            cout << ((char)y);
        }
        for (int y = x - 1; y >= 65; y--)
        {
            cout << ((char)y);
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
