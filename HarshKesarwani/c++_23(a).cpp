1) Constructors


#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); //constructor declaration and should be declared in public section of the class
    void print(void)
    {
        cout<<"number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex ::complex(void) //default constructor as it takes no parameter
{
    a = 10;
    b = 0;
}
int main()
{
    complex c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
