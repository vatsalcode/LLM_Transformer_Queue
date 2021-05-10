#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int  , int );
    void print(void)
    {
        cout<<"number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex ::complex(int x, int y) //parameterized constructor
{
    a = x;
    b = y;
}
int main()
{
    complex c(4,5); //implicit call
    complex a=complex(5,7); //explicit call
    c.print();
    a.print();
    return 0;
}
