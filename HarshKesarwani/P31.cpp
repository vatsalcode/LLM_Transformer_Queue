#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 9; x++)
    {
        for (int y = 1; y <= 5; y++)
        {
            if (x + y <= 6 || x - y >= 4)
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
