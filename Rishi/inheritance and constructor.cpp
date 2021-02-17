//constructor and inheritance
#include <iostream>
using namespace std;

/*
class b: public  a{
    constrctor of  a is invoked first then constructor of bis invoked
};

class b: public a, public c;{
constructor of a is invoked first then c is invoked and in last b is invoked; 
};

class a: public b,vitual public c{
constructor of c is invoked first then b is invoked and in last b is invoked
};

*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base class 1 constructor called " << endl;
    }
    void printdata()
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
        cout << "Base class 2 constructor called " << endl;
    }
    void printvalue()
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
        cout << "Derived contructor called " << endl;
    }
    void display()
    {
        cout << "The value of derived 1 is " << derived1 << endl;
        cout << "The value of derived 2 is " << derived2 << endl;
    }
};

int main()
{
    derived rishi(1, 2, 3, 4);
    rishi.printdata();
    rishi.printvalue();
    rishi.display();

    return 0;
}
//If we change order in class derived then order of calling constuctor is changed
