//Dynamic Initialisation of contructors
#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interstRate;
    float returnvalue;

public:
    BankDeposit() {} //It is very important otherwise it will show  an error  
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show(void);
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interstRate = r;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interstRate = float(r)/100;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interstRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was: " << principal << endl;
    cout << "Return value after " << years << " Years will be : " << returnvalue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of pricipal amount:" << endl;
    cin >> p;
    cout << "Enter the no of years to be stored :" << endl;
    cin >> y;
    cout << "Enter the value of rate of interest in decimals:" << endl;
    cin >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<endl<<endl<< "Enter the value of pricipal amount:" << endl;
    cin >> p;
    cout << "Enter the no of years to be stored:" << endl;
    cin >> y;
    cout << "Enter the value of rate of interest in percentage: " << endl;
    cin >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
