#include <iostream>
using namespace std;
 
int main()
{
    int i = 10;
 
    if (i == 10)
    {
        if (i < 15)
           cout<<"i is smaller than 15\n";
 
        if (i < 12)
            cout<<"i is smaller than 12 too\n";
        else
            cout<<"i is greater than 15";
    }
 
    return 0;
}
