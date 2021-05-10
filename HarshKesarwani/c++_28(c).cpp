#include <iostream>
using namespace std;

class test
{
    int a;
    int b;

    // test(int i, int j) : a(i) , b(j)       -----> will work
    // test(int i, int j) : a(i) , b(i + j)   -----> will work
    // test(int i, int j) : a(i) , b(2 * j)   -----> will work
    // test(int i, int j) : a(i) , b(a + j)   -----> will work
    // test(int i, int j) : b(j) , a(i + b)   -----> will not work as a is declared first so aa must be initialized first
public:
    test(int i, int j) : a(i)
    {
        b = j;
        cout << "done" << endl;
        cout << "value of a " << a << endl;
        cout << "value of b " << b << endl;
    }
};

int main()
{
    test t(1, 2);
    return 0;
}
