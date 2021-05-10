1) learned about virtual functions
2) learned about abstract base class
3) learned about pure virtual functions



#include <iostream>
using namespace std;

class base
{
public:
    int var1 = 1;
    virtual void display()
    {
        cout << " Displaying base class variable " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2 = 2;
    void display()
    {
        cout << "IN derived class " << endl;
        cout << "Displaying base class variable " << var1 << endl;
        cout << "Displaying derived class variable " << var2 << endl;
    }
};
int main()
{
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}
