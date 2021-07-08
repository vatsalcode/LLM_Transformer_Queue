#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    int pre = 0;
    for (int x = 1; x <= n; x++)
    {
        if (x != n)
        {
            cout << (pow(x, 3)) + (pre + 2) << ", ";
            pre = pre + 2;
        }
        else
        {
            cout << (pow(x, 3)) + (pre + 2);
            pre = pre + 2;
        }
    }
    return 0;
}
