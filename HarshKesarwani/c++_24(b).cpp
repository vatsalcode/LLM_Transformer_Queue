#include <iostream>
using namespace std;

class simple
{
    int data1, data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void print();
};

void simple ::print()
{
    cout << "the numbers are " << data1 << " , " << data2 << endl;
}
int main()
{
    simple s1(2, 4);
    s1.print();
    simple s2(1);
    s2.print();
    return 0;
}
