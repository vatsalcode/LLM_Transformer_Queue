#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1 :: greet();   //ambiguity resolution
        base2 :: greet();   //ambiguity resolution 
    }
};

int main()
{
    derived d;
    d.greet();
    return 0;
}
