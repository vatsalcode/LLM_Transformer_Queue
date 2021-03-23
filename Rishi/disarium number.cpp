//To check whether a number is Disarium number or not
/*
Disarium number is a number which is Ex 135  ===  1(power1) + 3(power2) + 5(power3)
*/
#include <iostream>
#include <cmath>

int count_digits(int num)
{
    int number = num;
    int digits = 0;
    while (number > 0)
    {
        number = number / 10;
        digits++;
    }
    return digits;
}

using namespace std;
int main()
{
    int number, a, sum = 0, temp;
    cout << "This is the programme to check a disarium number." << endl
         << endl;
    cout << "Enter the number: ";
    cin >> number;
    temp = number;
    int count = count_digits(number);

    while (number != 0)
    {
        a = number % 10;
        sum = sum + pow(a, count--);
        number = number / 10;
    }

    if (temp == sum)
    {
        cout << "The number " << temp << " is a disarium number" << endl;
    }
    else
    {
        cout << "The number " << temp << " is not a disarium number" << endl;
    }

    return 0;
}
