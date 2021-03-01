#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;

public:
    void intdata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void intdata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 o1;
    c2 o2;
    o1.intdata(34);
    o2.intdata(67);
    exchange(o1, o2);
    cout << "the value after exchange:  " << endl;
    cout << "the value of c1 : = ";
    o1.display();
    cout << "the value of c2 : = ";
    o2.display();
    return 0;
}
