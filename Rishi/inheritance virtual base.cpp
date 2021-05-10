//Virtual base class
#include <iostream>
using namespace std;

/*
student ---->tests
student ---->sports
sports ---->result
tests ----->results
*/

class student
{
protected:
    int rollno;

public:
    void setnumber(int a)
    {
        rollno = a;
    }
    void printnumber()
    {
        cout << "Your roll number is: " << rollno << endl;
    }
};

class tests : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks()
    {
        cout << "Your result is here: " << endl;
        cout << "Your number in maths are:" << maths << endl;
        cout << "Your number in physics are:" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float m1)
    {
        score = m1;
    }
    void printscore()
    {
        cout << "Your P.T score is: " << score << endl;
    }
};

class result : public tests, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printnumber();
        printmarks();
        printscore();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    result rishi;
    rishi.setnumber(4200);
    rishi.setmarks(80, 90);
    rishi.setscore(85.4);
    rishi.display();
    return 0;
}
