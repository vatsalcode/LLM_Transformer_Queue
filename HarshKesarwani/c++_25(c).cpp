#include <iostream>
using namespace std;

class num
{
    int count =0;
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "this is the time when destructor is called for object number " << count << endl;
        count--;
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
