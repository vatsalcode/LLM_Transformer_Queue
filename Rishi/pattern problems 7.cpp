/* 
Take input of two numbers and print all numbers between them including them and
if number is between 1 and 9 print the number and if it is greater than 9 print whether it is odd or even
*/
#include <iostream>
using namespace std;
void display(int num)
{
    if (num >= 1 && num <= 9)
    {
        switch (num)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        }
    }
    else if (num > 9)
    {
        if (num % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        display(i);
        if (i == b)
        {
            break;
        }
    }

    return 0;
}
