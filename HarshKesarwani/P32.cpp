#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 4; x++)
    {
        for (int y = x; y <= 3; y++)
        {
            cout << "    ";
        }

        for (int z = 1; z <= x; z++)
        {
            cout << "*   ";
        }
        cout << endl;
    }

    return 0; 
}
