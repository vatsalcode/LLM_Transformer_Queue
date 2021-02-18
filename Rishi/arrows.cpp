//pointers and arrows
#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << img << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
};
int main()
{
    //complex c1;                                  //All will run same
    //complex* ptr =&c1;                           //All will run same

    complex *ptr = new complex;                    //All will run same

    //(*ptr).setdata(1, 54);        This is how we run using pointers
    // (*ptr).getdata();

    ptr->setdata(1, 54); // this is how we initilaise arrow operator
    ptr->getdata();      // this is how we initilaise arrow operator

    //Array of objects
    complex *ptr2 = new complex[4];
    ptr2->setdata(1, 4);
    ptr2->getdata();

    return 0;
}
