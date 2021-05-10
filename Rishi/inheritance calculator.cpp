#include <iostream>
#include <cmath>
using namespace std;
class calculator
{
    float a;
    float b;

public:
    void setdata(float, float);
    void getdata();
};
void calculator ::setdata(float x, float y)
{
    a = x;
    b = y;
}
void calculator ::getdata()
{
    cout << "The sum of two numbers is: " << a + b << endl;
    cout << "The product of two numbers is: " << a * b << endl;
    cout << "The result of number1-number2: " << a - b << endl;
    cout << "The result of number1/number2 " << a / b << endl;
}
class scientificcalc
{
    float c;
    float d;

public:
    void setvalue(float p, float q);
    void getvalue();
};
void scientificcalc ::setvalue(float p, float q)
{
    c = p;
    d = q;
}
void scientificcalc ::getvalue()
{
    cout << "The value of sum of cos of given two numbers is" << cos(c) + cos(d) << endl;
    cout << "The value of sum of sin of given two numbers is" << sin(c) + sin(d) << endl;
    cout << "The value of sum of tan of given two numbers is" << tan(c) + tan(d) << endl;
    cout << "The value of sum of log of given two numbers is" << log(c) + log(d) << endl;
}
class hybridcalc : public calculator, public scientificcalc
{
public:
    void display()
    {
        getdata();
        getvalue();
    }
};
int main()
{
    float e, f;
    cout << "Enter the value of number 1:" << endl;
    cin >> e;
    cout << "Enter the value of number 2:" << endl;
    cin >> f;
    hybridcalc rishi;
    rishi.setdata(e, f);
    rishi.setvalue(e, f);
    rishi.display();
    return 0;
}
