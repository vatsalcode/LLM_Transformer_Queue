//To print a new type of star pattern
/*
    *
  * * *
* * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, l;
    cout << "Enter numbr of rows: ";
    cin >> n;
    cout << "Here is the Star pattern" << endl
         << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (l = i - 1; l >= 1; l--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
