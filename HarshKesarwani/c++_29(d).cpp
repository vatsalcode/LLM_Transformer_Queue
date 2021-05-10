#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setdata1(int a)
    {
        this->a = a;
    }

    A &setdata2(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata1()
    {
        cout << "The value of a is (with getdata1) " << a << endl;
    }

    void getdata2()
    {
        cout << "The value of a is (with getdata2) " << a << endl;
    }
};

int main()
{
    A b;
    b.setdata1(4);
    b.getdata1();
    b.setdata2(5);
    b.getdata2();
    return 0;
}
