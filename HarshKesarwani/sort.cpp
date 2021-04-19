#include <iostream>
using namespace std;

int main()
{
    int ar[5];
    for (int x = 0; x < 5; x++)
    {
        cin >> ar[x];
    }
    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 3 - x; y++)
        {
            int s1 = 0;
            for (int z = ar[y]; z != 0; z = z / 10)
            {
                s1 = s1 + z % 10;
            }
            int s2 = 0;
            for (int z = ar[y + 1]; z != 0; z = z / 10)
            {
                s2 = s2 + z % 10;
            }
            if (s1 > s2)
            {
                int t = ar[y];
                ar[y] = ar[y + 1];
                ar[y + 1] = t;
            }
        }
    }
    cout<<endl;
    for(int x=0;x<5;x++)
    {
        cout<<ar[x]<<endl;
    }
    return 0;
}
