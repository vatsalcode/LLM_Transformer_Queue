#include <iostream>
using namespace std;

int backward(int n)
{
    int r = 0;
    for (int x = n; x != 0; x = x / 10)
    {
        int d = x % 10;
        r = r * 10 + d;
    }
    return r;
}

bool isPrime(int n)
{
    bool flag = true;
    for (int x = 2; x <= n / 2; x++)
    {
        if (n % x == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int num;
    cout << "Enter number to check if it is EMIRP number" << endl;
    cin >> num;
    int back_num = backward(num);
    if (isPrime(num) == true && isPrime(back_num) == true)
    {
        cout << num << " IS AN EMIRP NUMBER" << endl;
    }
    else
    {
        cout << num << " IS NOT AN EMIRP NUMBER" << endl;
    }
}
