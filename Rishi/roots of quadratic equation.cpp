//To find roots of quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

void roots(int a, int b, int c)
{
    int x = pow(b, 2) - 4 * a * c;
    if (x < 0)
    {
        x = -1 * x;
        int d = pow(x, 0.5);

        cout << "The roots are " << -b / 2 * a << " + " << d / 2 * a << "i"
             << " and " << -b / 2 * a << " - " << d / 2 * a << "i" << endl;
    }

    else 
    {
        int c = pow(x, 0.5);
        cout << "The roots are " << (-b + c) / 2 * a << " and " << (-b - c) / 2 * a << endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter coefficient of x^2: ";
    cin >> a;
    cout << "Enter coefficient of x: ";
    cin >> b;
    cout << "Enter constant term: ";
    cin >> c;
    roots(a, b, c);
    return 0;
}
