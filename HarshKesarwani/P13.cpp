#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n " << endl;
    cin >> n;
    cout<<endl;

    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout<<endl;
    return 0;
}
