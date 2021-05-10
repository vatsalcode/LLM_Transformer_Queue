#include <iostream>
using namespace std;

int countt=0;
class num
{

public:
    num()
    {
        countt++;
        cout << "this is the time when constructor is called for object number " << countt << endl;
    }

    ~num()
    {
        cout << "this is the time when destructor is called for object number " << countt << endl;
        countt--;
    }
};

int main()
{
    cout << "Inside main function " << endl;
    cout << "Creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering this block " << endl;
        cout << "Creating two more objects " << endl;
        num n2, n3;
        cout << "Exiting this block " << endl;
    }
    cout << "Back to main " << endl;
    return 0;
}
