/*
Take input of two numbers a and b
and then print a`=a+b; and B=|a-b| using call by refrence
*/
#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    *a += *b;
    *b = *a - *b - *b;
    if (*b < 0)
    {
        *b = -1 * (*b);
    }
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    update(&a, &b);
    cout << "The value of new a is: " << a << endl;
    cout << "The value of new b is: " << b << endl;

    return 0;
}
