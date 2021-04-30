#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter" << endl;
    cin >> n;
    int x = n;
    int sum = 0;
    while (n != 0)
    {
        int d = n % 10;
        sum=sum+d*d*d;
        n = n / 10;
    }
    if (sum == x)
    {
        cout << "armstrong" << endl;
    }
    else
    {
        cout << "not";
    }
    return 0;
}
