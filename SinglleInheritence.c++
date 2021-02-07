// single inheritence
// single base and derived class
/*#include<iostream>
#include<math.h>
using namespace std;
class Account{ // base class
    public: // default access specifier private
    float salary = 60000; // member of base class  
    void display() // Method
    {
        cout<<"Welcome to the world";
    }

};
class Programmer : public Account // Programmer is derived class. We are inheriting the base class publicly 
// default visibility mode is private.
{ 
    public:
    float first_bonus  = 4000; // datamember of class Programmer 
    
};
int main()
{
    Programmer P1; // P1 is an object of derived class
    cout<<P1.first_bonus<<endl;// first bonus
    cout<<P1.salary<<endl;    // base class  salary
    P1.display();
    return 0;
}*/

#include <iostream>  
using namespace std;  
class A // base class 
{  
    int a = 4;   // private data members
    int b = 5;  
    public:   // public
    int mul()  // method is public
    {  
        int c = a*b;  
        return c;  
    }     
   
};  
  
class B : private A  // B os derived class ,visbility mode(private),A base class 
{  
    public:   // 
    void display() // metho 
    {  
        int result = mul();// we have used base class method in derived that's call inheritence...  
        std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
    }  
};  
int main()  
{  
   B b; // Derived class  object  
   b.display();  // B.display
  
    return 0;  
}  
// 