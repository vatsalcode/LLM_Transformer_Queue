#include <iostream>
using namespace std;
int main()
{
    cout << "enter lines" << endl;
    int n;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            if (x == y || x + y == n + 1)
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
    return 0;
}
