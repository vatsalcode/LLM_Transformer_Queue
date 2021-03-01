#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void sum(int a, int b);
    void subtract(int a, int b);
    void multiply(int a, int b);
    void division(int a, int b);
};

void SimpleCalculator ::sum(int a, int b)
{
    cout << "The sum is " << (a + b) << endl;
}

void SimpleCalculator ::subtract(int a, int b)
{
    cout << "The difference is " << (a - b) << endl;
}

void SimpleCalculator ::multiply(int a, int b)
{
    cout << "The difference is " << (a * b) << endl;
}

void SimpleCalculator ::division(int a, int b)
{
    cout << "The difference is " << (a / b) << endl;
}

class ScientificCalculator
{
    int a, b;

public:
    void cosine(int a, int b);
    void sine(int a, int b);
    void tangent(int a, int b);
    void exponential(int a, int b);
    void power(int a, int b);
};

void ScientificCalculator ::cosine(int a, int b)
{
    cout << "The cosine of is (of a) " << cos(a) << endl;
    cout << "The cosine of is (of b) " << cos(b) << endl;
}

void ScientificCalculator ::sine(int a, int b)
{
    cout << "The sine of is (of a) " << sin(a) << endl;
    cout << "The sine of is (of b) " << sin(b) << endl;
}

void ScientificCalculator ::tangent(int a, int b)
{
    cout << "The tangent of is (of a) " << tan(a) << endl;
    cout << "The tangent of is (of b) " << tan(b) << endl;
}

void ScientificCalculator ::exponential(int a, int b)
{
    cout << "The exponential of is (of a) " << exp(a) << endl;
    cout << "The exponential of is (of b) " << exp(b) << endl;
}

void ScientificCalculator ::power(int a, int b)
{
    cout << "The value of a to the power of b " << exp(a) << endl;
}

class Calculator : public SimpleCalculator, public ScientificCalculator
{
    int c;

public:
    int a, b;
    void getdata();
    int whichcal();
};

void Calculator ::getdata()
{
    cout << "Enter numbers " << endl;
    cin >> a >> b;
}

int Calculator ::whichcal()
{
    cout << "For Simple_Calculator press 1 & For Scientific_Calculator press 2" << endl;
    cin >> c;
    return c;
}

int main()
{
    char c;
    do
    {
        Calculator h;
        int t1 = h.whichcal();
        if (t1 == 1 || t1 == 2)
        {
            if (t1 == 1)
            {
                do
                {
                    h.getdata();
                    int t2;
                    cout << endl
                         << "What do you want to perform ? " << endl
                         << "1 SUM" << endl
                         << "2 DIFFERENCE" << endl
                         << "3 MULTIPLICATION" << endl
                         << "4 DIVISION" << endl;
                    cin >> t2;

                    switch (t2)
                    {
                    case 1:
                        h.sum(h.a, h.b);
                        break;

                    case 2:
                        h.subtract(h.a, h.b);
                        break;

                    case 3:
                        h.multiply(h.a, h.b);
                        break;

                    case 4:
                        h.division(h.a, h.b);
                        break;

                    default:
                        cout << "Wrong option" << endl;

                        break;
                    }
                    cout << "Input Again : Y/N? (For Simple Calculator ?) " << endl;
                    cin >> c;
                } while (c == 'Y' || c == 'y');
            }

            else
            {
                do
                {
                    h.getdata();
                    int t2;
                    cout << endl
                         << "What do you want to perform ? " << endl
                         << "1 SINE" << endl
                         << "2 COSINE" << endl
                         << "3 TANGENT" << endl
                         << "4 EXPONENTIAL" << endl
                         << "5 POWER" << endl;
                    cin >> t2;

                    switch (t2)
                    {
                    case 1:
                        h.sine(h.a, h.b);
                        break;

                    case 2:
                        h.cosine(h.a, h.b);
                        break;

                    case 3:
                        h.tangent(h.a, h.b);
                        break;

                    case 4:
                        h.exponential(h.a, h.b);
                        break;

                    case 5:
                        h.power(h.a, h.b);
                        break;

                    default:
                        cout << "Wrong option" << endl;
                        break;
                    }
                    cout << "Input Again : Y/N ? (For Scientific Calculator ?)" << endl;
                    cin >> c;
                } while (c == 'y' || c == 'Y');
            }
        }
        else
        {
            cout << "Wrong option " << endl;
        }
        cout << "CHOOSE AGAIN ? (Among Scientific And Simple Calculator ?) : Y/N " << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    return 0;
}
