#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    for (int x = 1; x <= 9; x += 2)
    {
        for (int y = x; y >= 3; y -= 2)
        {
            cout << " ";
        }
        for (int y = x; y <= 9; y += 2)
        {
            cout << y;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
