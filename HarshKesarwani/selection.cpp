#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter size" << endl;
    cin >> size;
    int ar[size];
    cout << "Enter numbers" << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> ar[x];
    }
    for (int x = 0; x <= size - 2; x++)
    {
        int index = x;
        for (int y = x + 1; y <= size - 1; y++)
        {
            if (ar[y] > ar[index])
            {
                index = y;
            }
        }
        int t = ar[x];
        ar[x] = ar[index];
        ar[index] = t;
    }
    cout << "Decreasing order" << endl;
    for (int x = 0; x < size; x++)
    {
        cout << ar[x]<<endl;
    }
}
