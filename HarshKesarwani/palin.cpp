#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter" << endl;
    cin >> n;
    int x = n;
    int r = 0;
    while (n != 0)
    {
        int d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (r == x)
    {
        cout << "palin" << endl;
    }
    else
    {
        cout << "not";
    }
    return 0;
}
