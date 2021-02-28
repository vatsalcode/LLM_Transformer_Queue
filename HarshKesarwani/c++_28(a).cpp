1) learned about virtual base class
2) learned about constructors in derived class
3) learned about initialization list in constructors
4) learned about new and delete keywords




#include <iostream>
using namespace std;

class student
{
protected:
    int r;

public:
    void set_number(int a)
    {
        r = a;
    }

    void print()
    {
        cout << "Your roll number is " << r << endl;
    }
};

class test : virtual public student
{
protected:
    float m, p;

public:
    void set_marks(float a, float b)
    {
        m = a;
        p = b;
    }

    void printm()
    {
        cout << "Yours marks in : " << endl
             << "Maths : " << m << endl
             << "Physics : " << p << endl;
    }
};

class sports : public virtual student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }

    void prints()
    {
        cout << "Your P.T. score is " << score << endl;
    }
};

class result : public test, public sports
{
    float total;

public:
    void display()
    {
        total = m + p + score;
        print();
        printm();
        prints();
        cout << "Your total score is : " << score<<endl; 
    }
};

int main()
{
    result r;
    r.set_number(28);
    r.set_marks(99.0, 100.0);
    r.set_score(100);
    r.display();
    return 0;
}
