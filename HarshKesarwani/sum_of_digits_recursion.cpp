#include <iostream>
using namespace std;

int sum = 0;
int sum_of_digits_numbers(int n)
{
    sum = n % 10;
    if (n == 0)
    {
        return 0;
    }
    if (n >= 1 && n < 10)
    {
        return sum;
    }
    else if (n < 0)
    {
        return (sum - sum_of_digits_numbers(-n / 10));
    }
    else
    {
        return (sum + sum_of_digits_numbers(n / 10));
    }
}
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    int sum = sum_of_digits_numbers(n);
    cout << sum;
    return 0;
}
