#include <iostream>
#include<string>
using namespace std;

bool prime(int n)
{
    for (int x = 2; x <= n / 2; x++)
    {
        if (n % x == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string n;
    cout << "Enter number" << endl;
    cin >> n;
    string n1 = n;
    bool f = false;
    for (int x = 0; x < n.length(); x++)
    {
        int p = stoi(n);
        if (prime(p))
        {
            char c = n[0];
            n = n.substr(1) + c;
            f = true;
            int res = n.compare(n1);
            if (res==0)
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (f == false)
    {
        cout << "Not circular";
    }
    else
    {
        cout << "Circular";
    }
    return 0;
}
