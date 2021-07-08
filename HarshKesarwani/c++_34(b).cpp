#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x=7, y=5;
    swapp(x,y);
    cout<<"After swap : "<<endl<<x<<"  "<<y<<endl;

    return 0;
}
