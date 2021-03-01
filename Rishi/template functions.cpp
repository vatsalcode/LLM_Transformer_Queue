//Template functions
#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T1>
void swapp(T1 &a, T1 &b)
{
    T1 temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = funcAverage<int, int>(2, 5);
    printf("The avg of these numbers is %0.3f \n", a);

    int x = 5;
    int y = 7;
    swapp<int>(x, y);
    cout << x << endl;
    cout << y << endl;

    return 0;
}
