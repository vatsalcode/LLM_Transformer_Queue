//To covert binary number into decimal number
#include <cmath>
#include <iostream>
using namespace std;

void check_bin(int number)
{
    int a = number, b;
    while (a > 0)
    {
        b = a % 10;
        if (b != 1 && b != 0)
        {
            cout << "The entered number is not binary" << endl;
            exit(0);
        }
        a = a / 10;
    }
}


int main()
{
    int n, a, i = 0, sum = 0;
    cout << "Enter a binary number: ";
    cin >> n;
    check_bin(n);
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a * pow(2, i);
        i++;
    }
    cout << sum;
    return 0;
}
