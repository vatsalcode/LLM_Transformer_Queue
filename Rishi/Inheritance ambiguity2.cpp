// Ambiguity no 2
#include <iostream>
using namespace std;

class b
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class d : public b
{
    int a;

public:
    void say()
    {
        cout << "hello my beautiful people" << endl;
    }
};

// As both the base and derived class as the same funtion i.e an ambiguity ,so the compiler wil automatically
// select the function of same class and this ambiguity will be automatically resolved by compiler

int main()
{
    b p;
    p.say();

    d q;
    q.say();

    return 0;
}
