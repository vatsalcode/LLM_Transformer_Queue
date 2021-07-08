#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n " << endl;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << y;
        }
        if (x != n)
        {
            cout << " + ";
        }
    }
    return 0;
}
