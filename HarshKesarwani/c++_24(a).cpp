1) constructor overloading
2) constructor with default arguments


#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex(double x)
    {
        a=x;
        b=0;
    }

    void print()
    {
        cout << "the number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(5, 4);
    c1.print();
    complex c2(5);
    c2.print();
    complex c3;
    c3.print();
    complex c4(3.222222234333);
    c4.print();
    return 0;
}
