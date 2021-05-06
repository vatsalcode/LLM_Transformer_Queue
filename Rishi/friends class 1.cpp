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
    int sumImgcomplex(complex, complex);
};
class complex
{
    int a, b;
    /*This is individually declaring functions as friend it could be time consuming if there are a large
      no of functions and can be complicated. So we declare a whole class as a function

   friend int calculator ::sumrealcomplex(complex o1, complex o2);
    friend int calculator ::sumImgcomplex(complex o1, complex o2);
*/
    friend class calculator; //This means that whole functions of class calculator can access private dats
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your number is " << a << "+ " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumImgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o1.printnumber();
    o2.setnumber(5, 7);
    o2.printnumber();

    calculator calc;
    calc.sumrealcomplex(o1, o2);
    calc.sumImgcomplex(o1, o2);
    int res = calc.sumImgcomplex(o1, o2);
    cout << "The sum of imaginary part of o1 and o2 is " << res << endl;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    return 0;
}
