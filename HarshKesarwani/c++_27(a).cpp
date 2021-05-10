#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_rnumber(int n);
    void get_rnumber(void);
};

void student ::set_rnumber(int r)
{
    roll = r;
}

void student ::get_rnumber()
{
    cout << "The roll number is " << roll << endl;
}

class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void setmarks(float m, float p);
    void getmarks(void);
};

void exam ::setmarks(float m, float p)
{
    maths = m;
    phy = p;
}

void exam ::getmarks()
{
    cout << "Marks of maths is " << maths << endl
         << "Marks of physics is " << phy << endl;
}

class result : public exam
{
    float percentage;

public:
    void display(void);
};

void result ::display()
{
    get_rnumber();
    getmarks();
    cout << "Yours percentage is " << (maths + phy) / 2 <<"%"<< endl;
}

int main()
{
    int r;
    float m,p;
    cout<<"Enter roll number"<<endl;
    cin>>r;
    cout<<"Enter marks in maths and physics"<<endl;
    cin>>m>>p;
    result harsh;
    harsh.set_rnumber(r);
    harsh.setmarks(m,p);
    harsh.display();
    return 0;
}
