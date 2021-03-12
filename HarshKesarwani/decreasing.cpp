#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter size" << endl;
    cin >> size;
    int ar[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter number" << endl;
        cin >> ar[x];
    }
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y <= size - 1; y++)
        {
            if (ar[y] < ar[y + 1])
            {
                int t = ar[y];
                ar[y] = ar[y + 1];
                ar[y + 1] = t;
            }
        }
    }
    cout << endl;
    cout << "Decreasing Order is:" << endl;
    for (int x = 0; x < size; x++)
    {
        cout << (ar[x]) << endl;
    }
    return 0;
}
