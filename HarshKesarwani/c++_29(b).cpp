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
    complex *ptr = new complex;
    // (*ptr).setdata(1,2); is exactly same as
    ptr->setdata(1, 2);
    (*ptr).getdata();
    return 0;
}
