#include <iostream>
using namespace std;

class shop
{
    int itemId[100];   //This indicate that this is an array of size 100
    int itemPrice[100];  //This indicate that this is an array of size 100
    int itemNo;

public:
    void initCounter(void) { itemNo = 0; }
    void setPrice(void);
    void displayprice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << itemNo + 1 << endl;
    cin >> itemId[itemNo];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[itemNo];
    itemNo ++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < itemNo; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayprice();
    return 0;
}
