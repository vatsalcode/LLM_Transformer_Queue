//The proggramme is to find  sum of digts without using strings
#include <iostream>
using namespace std;
int main()
{
    int number;
    int temp, n;
    int sum = 0;
    cout << "Enter the number:  ";
    cin >> number;
    temp = number;
    while (number > 0)
    {
        n = number % 10;
        sum = sum + n;
        number = number / 10;
    }

    cout << "The sum of digits of the entered number " << temp << " is: " << sum << endl;

    return 0;
}
