#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 7; x++)
    {
        for (int y = 1; y <= 7; y++)
        {
            if (x + y == 5 || x + y == 11 || x - y == 3 || y - x == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
