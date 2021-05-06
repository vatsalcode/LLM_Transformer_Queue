#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A& setdata(int a)
    {
        this->a = a; //This is also a pointer
        return *this;
    }
    void getdata()
    {
        cout << "The value of a is:" << a << endl;
    }
};

int main()
{
    A d;
    d.setdata(4).getdata(); 
    return 0;

}
