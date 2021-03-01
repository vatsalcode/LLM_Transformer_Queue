//Initialisation list(This is new type of syntax)
#include <iostream>
using namespace std;

/*
syntax for initialisation list:
constructor(arguement-list): initialisation section{
    asignment+codes
}
*/

class test
{
    int a;
    int b;

public:
    //  test(int i, int j) : a(i), b(j)  ------- This will run
    //  test(int i, int j) : a(i), b( i + j)  ------- This will run
    //  test(int i, int j) : a(i), b( 2 * j)  ------- This will run
    //  test(int i, int j) : a(i), b( a + j)  ------- This will run as a is already declared
    test(int i, int j) : b(j), a(i + b) // ------- This will not run beacuse a will be initilaised first as given in order of int
    {
        cout << "Constructor body applied" << endl;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    test rishi(4, 5);
    return 0;
}
