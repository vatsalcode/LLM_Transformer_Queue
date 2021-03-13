1) learned about pointers to objects
2) learned about arrow operator
3) learned about array of objects using pointers
4) learned about this pointer/keyword
5) learned about pointers to derived class




#include <iostream>
using namespace std;

class complex
{
    int r, i;

public:
    void setdata(int a, int b)
    {
        r = a;
        i = b;
    }

    void getdata()
    {
        cout << "The real part is " << r << endl;
        cout << "The imaginary part is " << i << endl;
    }
};

int main()
{
    complex c;
    complex *ptr = &c;
    // complex *ptr = new complex;
    (*ptr).setdata(1,2);
    (*ptr).getdata();
    return 0;
}
