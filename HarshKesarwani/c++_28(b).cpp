#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }

    void print1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }

    void print2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }

    void print3()
    {
        print1();
        print2();
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived h(1, 2, 3, 4);
    h.print3();
    return 0;
}
