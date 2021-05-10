#include<iostream>

using namespace std;

class complex
{
private:
    int real,imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void print()
    {
        cout<<real <<" + "<<imag<<"i"<<endl;
    }
};

int main()
{
    complex c1(5,4);
    complex c2(2,5);
    complex c3;

    c3=c1+c2;
    c3.print();


    return 0;
}
