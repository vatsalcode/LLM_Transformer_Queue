//To convert a decimal number into a octal number
#include <iostream>
using namespace std;
int main()
{
    int a, i;
    int b[10];
    cout << "This is the programme to convert decimal number to octal number" << endl
         << endl;
    cout << "Enter the number:";
    cin >> a;
    for (i = 0; a > 0; i++)
    {
        b[i] = a % 8;
        a = a / 8;
    }
    cout << "The binary number is: ";
    for (int p = i - 1; p >= 0; p--)
    {
        cout << b[p];
    }

    return 0;
}
