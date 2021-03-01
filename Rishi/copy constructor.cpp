//Copy constructor
#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    } //Default constructor is neccesary otherwise programme will not run
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    //When no copy contructor is found deafult copy constructor is invoked.
    void show()
    {
        cout << "The number for this object is: " << a << endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.show();
    y.show();
    z.show();
    //z1 shoul d resemble z or x or y
    number z1(z); //copy constructor invoked
    z1.show();

    z2 = z; //copy constructure not invoked because object already ban chuka hai
    z2.show();

    number z3 = z; //copy constructor invoked kyunki object ban rha hai abhi
    z3.show();

    return 0;
}
