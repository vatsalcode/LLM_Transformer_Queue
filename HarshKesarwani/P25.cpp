#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= 5; y++)
        {
            if (x == y || x + y == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
