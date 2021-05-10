1) learned about inheritance



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

//derived class syntax

/* 

class {{derived-class-name}} : {{visibility mode}} {{base class name}}
{
    class member/methods/etc.
};

by default visibility mode is private

private members of base class is never inherited

when visibility mode is private then the public members of base class becomes private memebers of derived class

*/ 

class programmer : employee
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
    skill.getdata();

    return 0;
}
