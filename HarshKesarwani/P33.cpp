#include <iostream>
using namespace std;

int main()
{
    int p = 1;
    for (int x = 1; x <= 4; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << p << " ";
            p++;
        }
        cout << endl;
    }

    return 0;
}
