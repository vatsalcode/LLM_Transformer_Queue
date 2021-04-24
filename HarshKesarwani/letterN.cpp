#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= 5; y++)
        {
            if (y == 1 || y == 5 || x == y)
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
    return 0;
}
