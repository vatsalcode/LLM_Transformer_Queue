1) Learned about static data members
2) Learned about methods

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
};

int employee ::count; //by default the value is set at 0,  if we want to give value then give here not in the class
//eg int employee :: count=1000;
int main()
{
    employee h,k,p;
    h.setdata();
    h.getdata();
    k.setdata();
    k.getdata();
    p.setdata();
    p.getdata();
    return 0;
}
