#include <iostream>
using namespace std;

int s;
class positive
{
    int c;

public:
    int c1(int n[])
    {
        c = 0;
        for (int x = 0; x < s; x++)
        {
            if (n[x] > 0)
            {
                c++;
            }
        }
        return c;
    }
};

class negative
{
    int c;

public:
    int c2(int n[])
    {
        c = 0;
        for (int x = 0; x < s; x++)
        {
            if (n[x] < 0)
            {
                c++;
            }
        }
        return c;
    }
};

class zero
{
    int c;

public:
    int c3(int n[])
    {
        c = 0;
        for (int x = 0; x < s; x++)
        {
            if (n[x] == 0)
            {
                c++;
            }
        }
        return c;
    }
};

class all : public positive, public negative, public zero
{
public:
    void p(int n[])
    {
        int po = c1(n);
        cout << "Number of positive numbers : " << po << endl;
    }

    void n(int n[])
    {
        int po = c2(n);
        cout << "Number of negative numbers : " << po << endl;
    }

    void z(int n[])
    {
        int po = c3(n);
        cout << "Number of zero's : " << po << endl;
    }

    void d(int n[])
    {
        int p = c1(n);
        int n1 = c2(n);
        int z = c3(n);
        cout << "Number of positive numbers : " << p << endl;
        cout << "Number of negative numbers : " << n1 << endl;
        cout << "Number of zero's : " << z << endl;
    }
};

int main()
{
    char c, c1;
    c1 = 'y';
    int op;

    cout << "Enter size of array : " << endl;
    cin >> s;

    int arr[s];

    do
    {
        if (c1 == 'y' || c1 == 'Y')
        {
            cout << "Enter numbers " << endl;
            for (int x = 0; x < s; x++)
            {
                cin >> arr[x];
            }
        }

        cout << "Options : " << endl
             << "1 - Positive" << endl
             << "2 - Negative" << endl
             << "3 - Zeros" << endl
             << "4 - All" << endl;
        cin >> op;

        all a;

        if (op == 1)
        {
            a.p(arr);
        }

        else if (op == 2)
        {
            a.n(arr);
        }

        else if (op == 3)
        {
            a.z(arr);
        }

        else if (op == 4)
        {
            a.d(arr);
        }

        else
        {
            cout << "Wrong option" << endl;
        }

        cout << "Check for others ? y/n" << endl;
        cin >> c;

        if (c == 'y' || c == 'Y')
        {
            cout << "Want to enter new sets of number or use the previously used ? y - for new / n - for old" << endl;
            cin >> c1;
        }

    } while (c == 'y' || c == 'Y');

    return 0;
}
