#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll;
public:
    string name;
    int cls;
    void setdata(int r);
    void getdata()
    {
        cout<<"the name of the student is "<<name<<endl;
        cout<<"the class of the student is "<<cls<<endl;
        cout<<"the roll no. of the student is "<<roll<<endl;
    }
};

void student ::setdata(int r)
{
    roll=r;
}

int main()
{
    student a;
    a.name="hk";
    a.cls=12;
    a.setdata(28);
    a.getdata(); 
    return 0;
}
