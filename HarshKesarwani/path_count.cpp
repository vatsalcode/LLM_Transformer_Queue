#include <iostream>
using namespace std;

int PathCount(int m, int n)
{
    if (m == 1 || n == 1)
    {
        return 1;
    }
    return PathCount(m - 1, n) + PathCount(m, n - 1);
}
int main()
{
    int n, m;
    cout << "Enter value of m" << endl;
    cin >> m;
    cout << "Enter value of n" << endl;
    cin >> n;
    int count = PathCount(m, n);
    cout << count;
    return 0;
}
