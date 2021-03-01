//Default parameters
#include <iostream>
using namespace std;

template <class T1=int , class T2=float>
class rishi
{
public:
    T1 a;
    T2 b;
    rishi(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main(){
    rishi<> r(4,6.6);
    r.display();
    return 0;
}
