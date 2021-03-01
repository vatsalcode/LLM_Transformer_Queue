// Multilevel Inheritence


#include<iostream>
using namespace std;
class A // level 0
{
    public:
    void display()
    {
        cout<<"Hello This is class A( Base class of B)"<<endl;
    }
};
class B: public A // level 1
{
    public:
    void display2()
    {
        cout<<"Hello This is  class B(Derived class of A and Base class of C)"<<endl;
    }
};
class C: public B // level 2
{
    public:
    void display3()
    {
        cout<<"Hello this is class C (Derived class of B)";
    }
};
int main()
{
    C c1;
    c1.display();
    c1.display2();
    c1.display3();
    return 0;
}