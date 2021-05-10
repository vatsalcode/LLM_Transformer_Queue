#include <iostream>
#include <cmath>
using namespace std;

int decimalToOctal(int decimalNumber);

int main()
{
   int decimalNumber;
   cout << "Enter a decimal number: ";
   cin >> decimalNumber;
   cout << decimalNumber << " in decimal = " << decimalToOctal(decimalNumber) << " in octal";
   
   return 0;
}

// Function to convert decimal number to octal
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
