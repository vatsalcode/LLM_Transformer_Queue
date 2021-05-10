#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(number &obj) //copy constructor
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }

    number(int num)
    {
        a = num;
    }

    void display()
    {
        cout << "the number is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // z1 should exactly resemble x
    z1.display();

    cout << endl;

    // when no copy constructor is found , compiler supplies its own copy constructor

    cout << "for z2 obj no copy constructor invoked " << endl;
    z2 = z; //copy constructor not called
    z2.display();

    cout << endl;

    cout << "for z3 obj copy constructor called" << endl;
    number z3 = z; //copy constructor invoked
    z3.display();
    return 0;
}
