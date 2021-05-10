
#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }

    void getdata()
    {
        cout << "The id is " << id << endl
             << "The price of item is " << price << endl;
    }
};

int main()
{
    int size, p;
    float q;
    cout << "Enter size " << endl;
    cin >> size;
    shop *s = new shop[size];
    shop *t = s;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Id and price of item " << (x + 1) << endl;
        cin >> p >> q;
        s->setdata(p, q);
        s++;
    }

    for (int x = 0; x < size; x++)
    {
        cout << "Item number " << (x + 1) << endl;
        t->getdata();
        t++;
    }

    return 0;
}
