#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //creating a constructor
    //contructor is a special member function with same name as that of class.It is automatically invoked
    //invoked means functtion wil be automatically called whenever an object is created
    //It is to initialise the objects of its class
complex (void);     //constructor decleration
void printdata(void){
    cout<<"The value of complex number is "<<a<<" + "<<b<<"i"<<endl;
}
};
complex ::complex(void){               //This is a default constructor
    a=10;
    b=20;
}
int main(){
    complex c,c1,c2;//We called this function without calling just because of the function of same name.
    c.printdata();
    c1.printdata();
    c2.printdata();
    return 0;
}
