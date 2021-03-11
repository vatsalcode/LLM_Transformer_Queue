#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines" << endl;
    cin >> n;
    cout << endl;
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
    cout<<endl;
    return 0;
}
