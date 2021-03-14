#include <iostream>
using namespace std;

template <class t>
class h
{
public:
    t data;
    h(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void h<t>::display()
{
    cout << data << endl;
}

int main()
{
    h<int> obj(5);
    cout << obj.data << endl;
    obj.display();

    h<char> ob('c');
    ob.display();

    return 0;
}
