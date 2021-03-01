1) Learned about friend functions



#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }

    friend complex sumcomplex(complex o1, complex o2); //can be declared in public or private section of the class, it cannot access the memebers directly by their names and need object_name.member_name to access any member
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.print();
    c2.setnumber(5, 8);
    c2.print();
    sum = sumcomplex(c1, c2);
    sum.print();
    return 0;
}







