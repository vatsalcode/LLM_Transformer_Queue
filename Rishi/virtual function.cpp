//Virtual functions
#include <iostream>
using namespace std;

class base
{
public:
    int varbase=1;
    virtual void display()
    {
        cout << "Displaying base class var " << varbase << endl;
    }
};

class derived : public base
{
public:
    int varderived=2;
    void display()
    {
        cout << "Displaying base class var " << varbase << endl;
        cout << "Displaying derived class var " << varderived << endl;
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
//Binding occurs at run time
