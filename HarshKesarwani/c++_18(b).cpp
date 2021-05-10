#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "id of employee is " << id <<" and this is employee number "<<count<<endl;
    }

    static void getcount(void)
    {
        //cout<<id; will throw an error coz static function can only access static variable and other static functions
        cout<<"the value of count is "<<count<<endl; 
    }
};

int employee ::count; 
int main()
{
    employee h,k,p;
    h.setdata();
    h.getdata();
    employee ::getcount();

    k.setdata();
    k.getdata();
    employee :: getcount();

    p.setdata();
    p.getdata();
    employee :: getcount();
    return 0;
}
