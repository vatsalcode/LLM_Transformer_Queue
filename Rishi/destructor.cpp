//Destructors 
#include <iostream>
using namespace std;
//Destructors never take a argurment and never return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number: " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when my desrtuctor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are here in our main function" << endl;
    cout << "Creating first objects n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block"<<endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
