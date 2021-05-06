#include <iostream>
using namespace std;

class complex; //This is a future decleration to class calculator that you will find complex class in this code

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    //We used scope resolution becaus e we have not defined class complex so first we will define it
};
class complex
{
    int a, b;
    friend int calculator ::sumrealcomplex(complex o1,complex o2);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your numner is " << a << "+ " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a + o2.a);
}
int main()
{
    return 0;
}
