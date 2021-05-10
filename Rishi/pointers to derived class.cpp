//Pointers to derived class
//Run time polymorphism
#include <iostream>
using namespace std;

class base
{
public:
    int varbase;
    void display()
    {
        cout << "Displaying base class var " << varbase << endl;
    }
};

class derived : public base
{
public:
    int varderived;
    void display()
    {
        cout << "Displaying base class var " << varbase << endl;
        cout << "Displaying base class var " << varderived << endl;
    }
};

int main()
{
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;
    base_class_pointer = &obj_derived; //I have put a base class pointer refrence to an object from derived class
    base_class_pointer->varbase = 34;
    base_class_pointer->display();

    derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;//I have put a derived class pointer refrence to an object from derived class
    derived_class_pointer->varbase=32;
    derived_class_pointer->varderived = 340;
    derived_class_pointer->display();
    return 0;
}


//This is run type polymorphism which decided which display to run and it is known as late binding.
//base class pointer can have refrence to derived class but it ca only run the function of base class
