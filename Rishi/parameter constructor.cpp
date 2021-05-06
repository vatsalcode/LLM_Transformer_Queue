#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

    void printdata(void)
    {
        cout << "The value of complex number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{ //This is a parametrised constructor ,it takes arguements like int x and int y
    a = x;
    b = y;
}

int main()
{
    //implicit call
    complex a(4, 6);
    a.printdata();

    //explicit call
    complex b = complex(5, 7);
    b.printdata();
    return 0;
}
