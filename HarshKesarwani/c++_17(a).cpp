#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter id of your item number" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int x = 0; x < counter; x++)
    {
        cout << "the price of item with id" << itemid[x] << " is" << itemprice[x] << endl;
    }
}

int main()
{
    shop d;
    d.initcounter();
    for (int x = 0; x < 101; x++)
    {
        d.setprice();
    }
    d.displayprice();
    return 0;
}
