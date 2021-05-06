//To find sum of digits of a number using recursion
#include <iostream>
using namespace std;
int digit(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10 + digit(num / 10));
}
int main()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    int sum = digit(number);

    cout << "The sum of digits of number are: " << sum;

    return 0;
}
