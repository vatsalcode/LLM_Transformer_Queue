#include <iostream>
using namespace std;
class bankdeposit
{
    int principal, year;
    float interestrate, returnvalue;

public:
    bankdeposit()
    {
    }
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = (float)r / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankdeposit::show()
{
    cout << "principal amt :" << principal << endl
         << "return value after " << year << " years is " << returnvalue << endl;
}

int main()
{
    bankdeposit b1, b2, b3;
    int p, y, r1;
    float r2;

    cout << "enter value of principal, year and rate2 " << endl;
    cin >> p >> y >> r2;
    b1 = bankdeposit(p, y, r2);
    b1.show();

    cout << "enter value of principal, year and rate1 " << endl;
    cin >> p >> y >> r1;
    b2 = bankdeposit(p, y, r1);
    b2.show();
    return 0;
}
