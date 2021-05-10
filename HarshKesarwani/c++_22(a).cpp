#include <iostream>
using namespace std;

class y;

class x
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }

    friend void add(x,y);
};

class y
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }

    friend void add(x,y);
};

void add(x o1, y o2)
{
    cout<<"sum of x and y objects "<<(o1.data+o2.data)<<endl;
}

int main()
{
    x a;
    a.setvalue(3);

    y b;
    b.setvalue(5);

    add(a,b);
    return 0;
}
