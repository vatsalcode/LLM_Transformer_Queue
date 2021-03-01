#include <iostream>
using namespace std;
//Base class
class employee
{
public:
    int id;
    float salary;
    employee() {}
    employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
};

class programmer : employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer p(1);
    cout << p.languagecode << endl;
    p.getdata();
    return 0;
}
