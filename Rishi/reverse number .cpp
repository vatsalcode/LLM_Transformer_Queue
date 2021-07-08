//To find  reverse of a number using while loop nut ot should not be divided by 10
#include <iostream>
using namespace std;
int main()
{
    int number, temp, r, sum = 0;
    cout << "This is the Programme to find reverse of a number" << endl
         << endl;
    cout << "Enter the number: " << endl;
    cin >> number;
    while (number > 0)
    {
        r = number % 10;
        sum = ((sum * 10) + r);
        number = number / 10;
    }

    cout << "The reverse of  this number is " << sum << endl;
    //cout << "The number you enetered was: " << number << endl;

    return 0;
}
