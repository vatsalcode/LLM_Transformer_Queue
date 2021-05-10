#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class harsh
{
public:
    T1 a;
    T2 b;
    T3 c;
    harsh(T1 x, T2 y, T2 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is " << a << endl
             << "The value of b is " << b << endl
             << "The value of c is " << c << endl;
    }
};

int main()
{
    harsh<> h1(4, 6.4, 'c');
    h1.display();

    cout<<endl;
    
    harsh<float, char, char> h2(1.4, 'o', 'c');
    h2.display();
    return 0;
}
