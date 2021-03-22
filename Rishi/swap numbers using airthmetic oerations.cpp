//To swap numbers using airthmetric operations and without using third variable like temp
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " This is the programme to reverse the two entered numbers" << endl
         << endl;
    cout << "Enter the first number:  ";
    cin >> a;
    cout << "Enter the second number:  ";
    cin >> b;

    //Reversing numbers using  * and /
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "The first number would become " << a << endl
         << "The second number would become " << b << endl
         << endl;

    //Reversing numbers using + and -
    cout << "Reversing the number once again" << endl
         << endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The first number would become " << a << endl
         << "The second number would become " << b;

    return 0;
}
