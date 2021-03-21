#include <iostream>
using namespace std;

int main()
{
    long a = 0;
    long b = 1;
    cout << a << " , ";
    cout << b << " , ";
    for (int x = 1; x <= 48; x++)
    {
        long c = a + b;
        if (x != 48)
        {
            cout << c << " , ";
            a = b;
            b = c;
        }
        
        else
        {
            cout << c;
            a = b;
            b = c;
        }
    }
    return 0;
}
