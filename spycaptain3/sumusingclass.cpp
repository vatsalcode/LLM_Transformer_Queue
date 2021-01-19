#include <iostream>
using namespace std;

class sum
{
    int a, b, t;

    public:

    void getdata( void);
    void putdata( void);
};

void sum :: getdata( void)
{
    cout<<" enter the value of a and b";
    cin>> a>> b;
}

void sum :: putdata( void)
{
    t=a+b;

cout<<" Addition of "<<a <<" and"<<b<<" ="<<t ;

}

int main()
{
    sum obj;
    obj.getdata();
    obj.putdata();
    return 0;
}

