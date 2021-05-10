#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl
             << "The value of base2 is " << base2int << endl
             << "The sum of base1 and base2 is " << (base1int + base2int) << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter values" << endl;
    cin >> a >> b;
    derived d;
    d.set_base1int(a);
    d.set_base2int(b);
    d.show();
    return 0;
}
