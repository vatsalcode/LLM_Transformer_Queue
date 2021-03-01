#include<iostream>
using namespace std;
class A{ // base class
    public:
    void display1(){
        cout<<"Hello this is class A"<<endl;
    }

};
class B{  // base class
    public:
    void display2(){
        cout<<"Hello this is class B"<<endl;
    }
};
class c{ // base class
    public:
    void display3(){
        cout<<"Hello this is class C"<<endl;
    }
};
class D:public A, public B ,public c{ // D is a derived class
    public:
    void display4(){
        cout<<"Hello I am derived Class"<<endl;
    }
};
int main()
{
   D d1;
   d1.display1();
   d1.display2();
   d1.display3();
   d1.display4();

    return 0;
}