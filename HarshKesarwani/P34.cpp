#include <iostream>
using namespace std;

int main()
{
    int p = 1;
    for (int x = 1; x <= 4; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            if ((p%2==0 && p!=2) || (p%3==0 && p!=3) || (p%5==0 && p!=5) || p==1)
            {
                cout << "* ";
                p++;
            }
            else
            {
                cout << "# ";
                p++;
            }
        }
        cout << endl;
    }
    return 0;
}
