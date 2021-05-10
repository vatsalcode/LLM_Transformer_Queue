// Ambiguity can be occured in using the multiple inheritence when a function with 
//the same name occurs more than in one base class.

#include<iostream>
using namespace std;
class A{
    public:
    void display()
    {
        cout<<"Class A"<<endl;
    }

};
class B{
    public:
    void display()
    {
        cout<<"Class B"<<endl;
    }

};
class C : public A, public B{
    public:
    void view()
    {
        //display();
    }

};
int main()
{
    C c1;
    c1.view();
    return 0;
}