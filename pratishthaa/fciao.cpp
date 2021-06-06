#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  amount = 0;
        int  a, b, p, q;
        cin >> a >> b >> p >> q;
        int flag = 0;

        int m = 0;
        int j = 0;
        int u = a % b;
        int flag2 = 0;

        while (a >= 0)
        {
            if (a - b >= 0)
            {

                a = a - b;
            }
            else
            {
                a = a - u;
                flag2 = 1;
            }

            if (flag2 == 1)
            {
                for (int i = 1; i <= u; i++)
                {
                    amount = amount + (p + (j * q));
                }
                break;
            }
            else
            {

                for (int i = 1; i <= b; i++)
                {
                    amount = amount + (p + (j * q));
                    m++;
                }
                if (m == b)
                {
                    j++;
                    m = 0;
                }
            }
        }
        cout << amount << endl;
    }
    return 0;
}
