//Pointers and arrays
#include <iostream>
using namespace std;

class shopitem
{
    int Id;
    float price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The Id of this item is: " << Id << endl;
        cout << "The price of this item is: " << price << endl;
    }
};

int main()
{
    int size = 3;
    int p;
    float q;
    shopitem *ptr = new shopitem[size]; //This new shop[10] says to allocate memory of 10 variables in pointer
    shopitem *ptrtemp = ptr;            //but it will start from base values and it will memory to store 10 var of shop
    for (int i = 0; i < size; i++)
    {
        cout << " Enter Id of the item " << i + 1 << endl;
        cin >> p;
        cout << " Enter price of the item " << i + 1 << endl;
        cin >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item no: " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}
