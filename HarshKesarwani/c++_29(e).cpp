#include <iostream>
using namespace std;

class base
{
public:
    int var1;
    void display()
    {
        cout << " Displaying base class variable " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2;
    void display()
    {
        cout<<"IN derived class "<<endl;
        cout<<"Displaying base class variable "<<var1<<endl;
        cout << " Displaying derived class variable " << var2 << endl;
    }
};

int main()
{
    base *ptr;
    base obj1;
    derived obj2;
    ptr = &obj2; //pointing base class pointer to derived class

    ptr->var1 = 28;
    ptr->display();

    ptr->var1 = 2800;
    ptr->display();

    derived *der;
    der=&obj2;

    der->var1=3838383;
    der->var2=98;
    der->display();

    // ptr->var2=45;   will throw error

    return 0;
}
