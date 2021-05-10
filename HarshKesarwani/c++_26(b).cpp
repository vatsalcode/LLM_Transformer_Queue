#include <iostream>
using namespace std;

//base class
class employee
{

public:
    int id;
    float salary;
    employee()
    {
    }
    employee(int impid)
    {
        id = impid;
        salary = 1000;
    }
};

// when visibilty mode is public then the public members of base class becomes public members of derived class

class programmer : public employee
{
public:
    int languagecode;
    programmer(int impid)
    {
        id = impid;
        languagecode = 9;
    }

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harsh(1), kim(2);
    cout << harsh.salary << endl;
    cout << kim.salary << endl;

    programmer skill(1);
    cout << skill.languagecode << endl;
    cout<<skill.id<<endl;
    skill.getdata();

    return 0;
}
