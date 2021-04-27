#include <iostream>
using namespace std;
int main()
{
    int ar[5];
    cout << "enter elements" << endl;
    for (int x = 0; x <= 4; x++)
    {
        cin >> ar[x];
    }
    cout << "Number\t\tFrequency" << endl;
    for (int x = 0; x <= 4; x++)
    {
        int c = 0;
        bool found = false;
        for (int y = 0; y <= x - 1; y++)
        {
            if (ar[x] == ar[y])
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            for (int z = 0; z <= 4; z++)
            {
                if (ar[x] == ar[z])
                {
                    c++;
                }
            }
            cout << ar[x] << "\t\t\t" << c << endl;
        }
    }
    return 0;
}
