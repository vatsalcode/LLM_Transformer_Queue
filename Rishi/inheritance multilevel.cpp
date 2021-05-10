//Multilevel inheritance
#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void set_rollnumber(int n);
    void get_rollnumber(void);
};
void student::set_rollnumber(int n)
{
    rollno = n;
}
void student ::get_rollnumber()
{
    cout << "The roll number of student is " << rollno << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float a, float b)
{
    maths = a;
    physics = b;
}
void exam ::get_marks()
{
    cout << "The number obtained in physics are " << physics << endl;
    cout << "The number obtained in Maths are " << maths << endl;
}
class result : public exam
{
    float percentage;

public:
    void displayresult()
    {
        get_rollnumber();
        get_marks();
        cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result harry;
    harry.set_rollnumber(420);
    harry.set_marks(99, 99);
    harry.displayresult();
    return 0;
}
