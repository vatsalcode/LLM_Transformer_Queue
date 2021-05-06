#include <iostream>
using namespace std;

/*For a protected member 
                                        Public derivation    Private derivation    Protected Derivation      
                1.Private Members       Not inherited          Not inherited        Not inherited
                 2.Protected Members      Protected             Private             Protected
                 3.Public Members         Public               Private              Protected

*/

class base
{
protected: //protected is a private variable which could be inherited
    int a;

private:
    int b;
};
class derived : protected base
{
    public:
    void setdata(int num){
        a=num;
    }
    void display(){
        cout<<"The value of the given data is "<<a;
    }

};
int main()
{
    base c;
    derived d;
    //cout<<c.a;   It will show error becuse protected members cannot be  compiled like this (just like private)
    // cout<<d.a;  This will also show error as a will be protected member in derived class as well
    d.setdata(4);
    d.display();
    return 0;
}
