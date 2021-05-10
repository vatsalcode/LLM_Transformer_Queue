#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;

public:
    simple(int a , int b=9 )
    {
        data1 = a;
        data2 = b;
    }
    void printdata()
    {
        cout << "The value of data is " << data1 << " and " << data2 << endl;
    }
};
//Basically we have  defined a default value for data which is 9 if we does not provide any value it will
//set its value to 9 or if we specify some value it will use that value
int main()
{
    simple s(1, 4);
    s.printdata();

    simple p(1);
    p.printdata();

    //In one case we specified the value and in other we dont specified the value
    return 0;
}
