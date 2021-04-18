#include <iostream>
using namespace std;

int main()
{
    int ar[10];
    for (int x = 0; x < 10; x++)
    {
        cin >> ar[x];
    }
    for (int x = 0; x <= 8; x++)
    {
        int index = x;
        for (int y = x + 1; y <= 9; y++)
        {
            if (ar[y] < ar[index])
            {
                index = y;
            }
        }
        int t = ar[x];
        ar[x] = ar[index];
        ar[index] = t;
    }
    cout << "Increasing order" << endl;
    for (int x = 0; x < 10; x++)
    {
        cout << ar[x] << endl;
    }
    return 0;
}
