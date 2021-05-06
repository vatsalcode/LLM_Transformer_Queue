#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &x, c2 &y);

public:
    void Indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "The value of c1 is :" << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &x, c2 &y);

public:
    void Indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << "The value of c2 is :" << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.Indata(34);
    oc1.display();
    oc2.Indata(54);
    oc2.display();
    exchange(oc1, oc2);
  cout<<"The value of c1 after exchanging becomes: ";
  oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();
    /*we camnot put it as
               cout<<"The value of c1 after exchanging becomes: "<<oc1.display<<endl;
               beacuse it is not any int or float it is just a function*/
    
    return 0;
}
