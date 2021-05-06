#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float base, exponent, result;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result;
    
    return 0;
}
