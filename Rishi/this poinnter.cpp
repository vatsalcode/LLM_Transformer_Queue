//'This'pointer
#include <iostream>
using namespace std;

class A
{
    int b;

public:
    A& setdata(int b)
    {
        this->b = b; //This is also a pointer
        return *this;
    }
    void getdata()
    {
        cout << "The value of b is:" << b << endl;
    }
};

int main()
{
    //This is a keyword which is a pointer which points tot the object which invokes th member function
    A d;
    d.setdata(4).getdata();
    return 0;
}
